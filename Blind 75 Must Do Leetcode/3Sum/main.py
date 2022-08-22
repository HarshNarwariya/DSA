class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        result = []
        
        def twoSum(left, x):
            # since array is sorted we can
            # can use two pointer approach
            right = len(nums) - 1
            while left < right:
                value = x + nums[left] + nums[right]
                if value > 0:
                    right -= 1
                elif value < 0:
                    left += 1
                else:
                    result.append([x, nums[left], nums[right]])
                    left += 1
                    
                    # To not get duplicate values
                    while nums[left] == nums[left - 1] and left < right:
                        left += 1
        
        nums.sort()
        for i in range(len(nums)):
            x = nums[i]
            
            # To not duplicate values
            if i > 0 and nums[i - 1] == x:
                continue
            
            # Problem is converted into two sum
            twoSum(i + 1, x)
            
        return result

        
