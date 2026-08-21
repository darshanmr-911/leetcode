class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        x = [] 

        for i in range(len(nums)):
            if nums[i] != 0:
                x.append(nums[i])

        for i in range(len(nums)):
            if nums[i] == 0:
                x.append(nums[i])

        # for i in range(len(x)):
        #     nums[i] = x[i]
        nums[:] = x


                

 
        




