import kociemba
import string
a = input()

a = a.replace('B', 'U')
a = a.replace('R', 'F')
a = a.replace('Y', 'R')
a = a.replace('W', 'L')
a = a.replace('G', 'D')
a = a.replace('O', 'B')

print(a)
print(kociemba.solve(a))