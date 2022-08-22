class Solution:
    def climbStairs(self, n: int) -> int:
        cache = {}
        def dp(n):
            if n < 0:
                return 0
            if n == 1:
                return 1
            if n == 2:
                return 2
            if n in cache:
                return cache[n]
            cache[n] = dp(n - 1) + dp(n - 2)
            return cache[n]
        return dp(n)
