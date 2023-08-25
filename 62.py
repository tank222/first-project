x=int(input('Введите число: '))
d=0
for b in range(1, x+1):
if (x%b) == 0:
d +=1
print(d)