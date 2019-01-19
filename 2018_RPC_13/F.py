from sys import stdin

def f(n):             
    fact = 1
    for i in range(n):
        fact*=n
        fact %= 10**9 + 7
        n-=1
    return fact

linea1 = stdin.readline()
linea2 = stdin.readline()

n = int(linea1.split()[0])
k = int(linea1.split()[1])

resto = 0
if linea2.count('1') == k:
    resto = 1

print((f(n)//((f(n - k) * f(k)))) - resto)
