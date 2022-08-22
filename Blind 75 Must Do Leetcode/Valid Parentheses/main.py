class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        brackets = {
            '(': ')',
            '[': ']',
            '{': '}',
        }
        flag = True
        for c in s:
            if c in brackets:
                stack.append(c)
            else:
                if (len(stack) == 0 or brackets[stack.pop()] != c):
                    flag = False
                    break
        return len(stack) == 0 and flag
