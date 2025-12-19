from typing import List
from queue import Queue
from collections import defaultdict

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n:int = len(nums)
        umap = defaultdict(int)
        for i in range(n):
            a:int = nums[i]
            if umap.get(target-a) is None:
                umap[a]=i
            else:
                return [umap.get(target-a), i]
            


if __name__ == "__main__":
    solution = Solution()
    nums: List[int] = [2,7,11,15]
    result = solution.twoSum(nums, 9)
    print(f"result = {result}")