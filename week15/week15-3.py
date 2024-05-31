# week15-3.py 寫到一半的 Python 版
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N = len(s)
        for i in range(N): #先用python把字串的迴圈寫出來
            print( s[i], t[i] ) #字串的陣列

        ans = 0
        return ans