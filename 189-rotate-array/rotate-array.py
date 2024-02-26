class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
      
        l=0
        for i in range(k):
            l=nums[-1]
            nums.insert(0,l)
            nums.pop()
        