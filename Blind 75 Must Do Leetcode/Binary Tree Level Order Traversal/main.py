# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        def bfs(root):
            results = []
            if not root:
                return results
            q = [root,]
            while q:
                size = len(q)
                temp = []
                while size > 0:
                    cur = q.pop(0)
                    temp.append(cur.val)
                    if cur.left:
                        q.append(cur.left)
                    if cur.right:
                        q.append(cur.right)
                    size -= 1
                results.append(temp)
            return results
        return bfs(root)
