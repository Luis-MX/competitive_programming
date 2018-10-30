linea = input()

nums = [int(x) for x in linea.split('.')]

for n in nums:
    print(bin(n)[2:].zfill(8), end='')
print()
