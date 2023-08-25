n = int(input("Введите количество чисел: "))
count=0
for i in range(1,n+1):
print(f'Введите {i} число')
a = int(input())
if a == 0:
count+=1
print(f'Чисел равных нулю: {count}')