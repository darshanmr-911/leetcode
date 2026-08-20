class Solution:
    def plusOne(self, x: List[int]) -> List[int]:
        for i in range(len(x) - 1, -1, -1):
            if x[i] < 9:
                x[i] += 1 
                return x
            x[i] = 0
        return [1] + x


