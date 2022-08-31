import sys
import math
#one line sudoku 019283746?
# output 5
s = input()


for i in range(1, 10):
    if str(i) not in s:
        print(i)