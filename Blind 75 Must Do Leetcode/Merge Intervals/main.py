class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort() # O(nlogn)
        result = []
        for item in intervals: # O(n)
            if not result or result[-1][1] < item[0]:
                result.append(item)
            else:
                result[-1][1] = max(item[1], result[-1][1])
        return result
