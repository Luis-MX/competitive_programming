
MAX = 1000000;

primos = [True for i in range(MAX + 1)]
primos[:2] = [False, False]
for i in range(2, MAX + 1):
	if primos[i]:
		for j in range(i + i, MAX + 1, i):
			primos[j] = False


for i in range(10):
	for j in range(10):
		print('[{:3}{:5}]'.format(
			(i * 10) + j,
			' ** ' if primos[(i * 10) + j] else ''),
			end=''
		)
	print()
print(primos.count(True), 'primos')