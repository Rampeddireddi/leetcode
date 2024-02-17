class Solution:
    def reverse(self, x: int) -> int:
        sign=1
        if x<0:
            sign=-1
        n=abs(x)
        s=str(n)
        s=s[::-1]
        if int(s)<(2**31)-1 and int(s)>((-2)**31):    
            return sign*int(s)
        return 0