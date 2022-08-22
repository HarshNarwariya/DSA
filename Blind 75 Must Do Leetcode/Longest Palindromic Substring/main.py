class Solution:
    def longestPalindrome(self, s: str) -> str:
        def fromCenterCheckPalindromeReturnIndex(left, right, string):
            while left >= 0 and right < len(string)\
                  and (string[left] == string[right]):
                left -= 1
                right += 1
            return right - left - 1
    
        l, r = 0, 0
        for i in range(len(s)):
            length = max(
                fromCenterCheckPalindromeReturnIndex(i, i, s),
                fromCenterCheckPalindromeReturnIndex(i, i + 1, s)
            )
            if (length > r - l):
                l = i - (length - 1) // 2
                r = i + length // 2
        return s[l: r + 1]
