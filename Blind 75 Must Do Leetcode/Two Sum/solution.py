class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result  = None
        hashmap = dict()
        for i in range(len(nums)):
            if target - nums[i] in hashmap:
                result = (hashmap[target - nums[i]], i)
                break
            else:
                hashmap[nums[i]] = i
        return result
