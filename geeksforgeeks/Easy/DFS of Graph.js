class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        set<int>v;
        stack<int>st;
        vector<int>ans;
        
        st.push(0);
        v.insert(0);
        
        while(!st.empty()) {
            
            int n = st.top();
            
            ans.push_back(n);
            st.pop();
            
            for (int i = adj[n].size()-1; i>=0; i--) {
                
                if (!v.count(adj[n][i])) {
                    v.insert(adj[n][i]);
                    st.push(adj[n][i]);
                }
            }
        }
        
        return ans;
    }
};