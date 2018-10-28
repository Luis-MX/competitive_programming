import sys
casos = int(input())

anterior = 1
nums = list()  # lista con la serie de numeros de catalan
nums.append(anterior)  # El elemento 0 de la serie tiene valor 1
nums.append(anterior)  # El elemento 1 de la serie tiene valor 1
for i in range(1, 5001):
    num = int(((2 * (2 * i + 1)) // (i + 2)) * anterior)  # Formula para generar los numeros de catalan
    nums.append(num)
    anterior = num


for x in range(casos):
    print(nums[int(sys.stdin.readline())])  # respuesta de cada caso
