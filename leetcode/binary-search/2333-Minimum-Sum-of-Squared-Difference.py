class Solution:
    def minSumSquareDiff(self, nums1: List[int], nums2: List[int], k1: int, k2: int) -> int:
        d = [abs(a - b) for a, b in zip(nums1, nums2)]
        k = k1 + k2

        if sum(d) <= k:
            return 0

        l, r = 0, max(d)

        while l < r:
            mid = (l + r) // 2
            need = sum(max(x - mid, 0) for x in d)

            if need <= k:
                r = mid
            else:
                l = mid + 1

        for i in range(len(d)):
            k -= max(d[i] - l, 0)
            d[i] = min(d[i], l)

        for i in range(len(d)):
            if k == 0:
                break
            if d[i] == l:
                d[i] -= 1
                k -= 1

        return sum(x * x for x in d)