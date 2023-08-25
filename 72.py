str_in = input('Ведите строку: ')
while ' ' in str_in:
str_in = str_in.replace(' ', ' ')
print(str_in)