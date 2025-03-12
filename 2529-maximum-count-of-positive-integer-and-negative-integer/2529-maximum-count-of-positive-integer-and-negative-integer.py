class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        # p=0
        # n=0
        # for i in range(len(nums)):

        #     if nums[i]>0:
        #         p+=1 
        #     elif nums[i]<0:
        #         n+=1
        #     else:
        #         pass
        # m=max(p,n)
        # return m
        # own binary logic under logic building
        # l=0

        # r=len(nums)-1
        # z=nums.count(0)
        # while l>r:
        #     t=0
        #     m=(l+r)//2
        #     if nums[m]==0:
        #         for i in range(m,-1,-1):
        #             if nums[i]!=0:
        #                 t=i
        #         return max(t,z-t)
        #     elif nums[m]<0:
        #         l=m
        #     else:
        #         r=m
        # answer
        s=0
        e=len(nums)-1
        p=0
        while True:
            m=(s+e)//2
            if nums[m]>=0 and nums[m-1]<0:
                p=m
                break
            if nums[m]<0:
                s=m
            if nums[m]>0:
                e=m
            if min(nums)>=0:
                return len(nums)-nums.count(0)
            if max(nums)<=0:
                return len(nums)-nums.count(0)
        return max(p,len(nums)-p-nums.count(0))
                

       