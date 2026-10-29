
class BinaryIndexedTree {
    int n;
    vector<int> bit;

public:
    BinaryIndexedTree(int n) : n(n), bit(n + 1, 0) {}

    void update(int i, int val) {
        for (++i; i <= n; i += i & -i)
            bit[i] ^= val;
    }

    int query(int i) {
        int ans = 0;
        for (; i > 0; i -= i & -i)
            ans ^= bit[i];
        return ans;
    }
};

class Solution {
    vector<vector<int>> g, up;
    vector<int> parent, depth, tin, tout, mask;
    int timer, LOG;

    void dfs(int u, int p) {
        parent[u] = (p == -1 ? u : p);
        tin[u] = timer++;

        for (int v : g[u]) {
            if (v == p) continue;
            depth[v] = depth[u] + 1;
            dfs(v, u);
        }

        tout[u] = timer;
    }

    int lca(int u, int v) {
        if (depth[u] < depth[v])
            swap(u, v);

        int diff = depth[u] - depth[v];

        for (int j = 0; j < LOG; j++) {
            if (diff & (1 << j))
                u = up[j][u];
        }

        if (u == v) return u;

        for (int j = LOG - 1; j >= 0; j--) {
            if (up[j][u] != up[j][v]) {
                u = up[j][u];
                v = up[j][v];
            }
        }

        return parent[u];
    }

public:
    vector<bool> palindromePath(
        int n,
        vector<vector<int>>& edges,
        string s,
        vector<string>& queries
    ) {
        g.assign(n, {});

        for (auto& e : edges) {
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }

        parent.assign(n, 0);
        depth.assign(n, 0);
        tin.resize(n);
        tout.resize(n);
        timer = 0;

        dfs(0, -1);

        LOG = 1;
        while ((1 << LOG) <= n) LOG++;

        up.assign(LOG, vector<int>(n));
        up[0] = parent;

        for (int j = 1; j < LOG; j++) {
            for (int i = 0; i < n; i++) {
                up[j][i] = up[j - 1][up[j - 1][i]];
            }
        }

        mask.resize(n);
        for (int i = 0; i < n; i++)
            mask[i] = 1 << (s[i] - 'a');

        BinaryIndexedTree fenwick(n + 1);

        for (int i = 0; i < n; i++) {
            fenwick.update(tin[i], mask[i]);
            fenwick.update(tout[i], mask[i]);
        }

        vector<bool> ans;

        for (string& q : queries) {
            stringstream ss(q);
            string op;
            int u;
            ss >> op >> u;

            if (op == "update") {
                char c;
                ss >> c;

                int newMask = 1 << (c - 'a');

                if (mask[u] != newMask) {
                    int delta = mask[u] ^ newMask;

                    fenwick.update(tin[u], delta);
                    fenwick.update(tout[u], delta);

                    mask[u] = newMask;
                }
            } else {
                int v;
                ss >> v;

                int w = lca(u, v);

                int pathMask =
                    fenwick.query(tin[u] + 1) ^
                    fenwick.query(tin[v] + 1) ^
                    mask[w];

                ans.push_back(
                    (pathMask & (pathMask - 1)) == 0
                );
            }
        }

        return ans;
    }
};
