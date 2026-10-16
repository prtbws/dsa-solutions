
from typing import List

class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        MOD = 10**9 + 7
        n = len(nums)

        sm = [0] * (4 * n)
        sq = [0] * (4 * n)
        lazy = [0] * (4 * n)
        last = {}

        def apply(node, l, r, val):
            length = r - l + 1

            sq[node] = (
                sq[node] + 2 * val * sm[node] + length * val * val
            ) % MOD

            sm[node] = (sm[node] + length * val) % MOD
            lazy[node] += val

        def push(node, l, r):
            if lazy[node] == 0 or l == r:
                return

            mid = (l + r) // 2
            apply(node * 2, l, mid, lazy[node])
            apply(node * 2 + 1, mid + 1, r, lazy[node])
            lazy[node] = 0

        def update(node, l, r, ql, qr):
            if ql <= l and r <= qr:
                apply(node, l, r, 1)
                return

            push(node, l, r)
            mid = (l + r) // 2

            if ql <= mid:
                update(node * 2, l, mid, ql, qr)

            if qr > mid:
                update(node * 2 + 1, mid + 1, r, ql, qr)

            sm[node] = (sm[node * 2] + sm[node * 2 + 1]) % MOD
            sq[node] = (sq[node * 2] + sq[node * 2 + 1]) % MOD

        ans = 0

        for i, x in enumerate(nums):
            prev = last.get(x, -1)

            update(1, 0, n - 1, prev + 1, i)

            ans = (ans + sq[1]) % MOD
            last[x] = i

        return ans
