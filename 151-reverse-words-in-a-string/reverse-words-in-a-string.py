class Solution:
    def reverseWords(self, s: str) -> str:
        s=s.strip()
        l=s.split()
        l.reverse()
        ns=""
        for i in l:
            ns+=i
            ns+=" "

        ns=ns.strip()
        return ns       