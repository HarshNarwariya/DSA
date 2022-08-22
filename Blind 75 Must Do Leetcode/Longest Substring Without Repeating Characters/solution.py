class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        visited = {}
        # abba
        maxlen = 0
        p1 = 0
        for p2, c in enumerate(s):
          if c in visited:
            p1 = max(p1, visited[c] + 1)
          maxlen = max(maxlen, p2 - p1 + 1)
          visited[c] = p2
        return maxlen
