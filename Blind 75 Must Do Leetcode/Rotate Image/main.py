class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        def transpose():
            for i in range(n):
                for j in range(i + 1, n):
                    matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        
        def reverseEachRow():
            for i in range(n):
                left = 0
                right = n - 1
                while left < right:
                    matrix[i][left], matrix[i][right] = matrix[i][right], matrix[i][left]
                    left += 1
                    right -= 1
                
        
        transpose()
        reverseEachRow()
        return matrix
