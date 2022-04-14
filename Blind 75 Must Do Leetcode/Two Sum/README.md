Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

<p><strong>Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,7,11,15], target = 9
<strong>Output:</strong> [0,1]
<strong>Explanation:</strong> Because nums[0] + nums[1] == 9, we return [0, 1].
</pre>

# Solution

+ Use hash table

example:

```
target = 10
array = [2, 3, 4, 5, 6]

# on difference if x exists in our hash table
x = target - array[i] # x exisits in hash table then result = (x, array[i])
# if not add array[i] to hash table and continue
```
