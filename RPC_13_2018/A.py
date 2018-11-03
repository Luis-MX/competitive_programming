from sys import stdin;
import copy

caras = [
    [
        [0,0,0],
        [0,1,0],
        [0,0,0]
    ],
    [
        [0,0,1],
        [0,0,0],
        [1,0,0]
    ],
    [
        [0,0,1],
        [0,1,0],
        [1,0,0]
    ],
    [
        [1,0,1],
        [0,0,0],
        [1,0,1]
    ],
    [
        [1,0,1],
        [0,1,0],
        [1,0,1]
    ],
    [
        [1,0,1],
        [1,0,1],
        [1,0,1]
    ]
]
cara = [[0,0,0],[0,0,0],[0,0,0]]
linea1 = stdin.readline()
linea2 = stdin.readline()
linea3 = stdin.readline()

def conv(c):
    if c == 'o': return 1
    return 0
cara[0][0] = conv(linea1[0])
cara[0][1] = conv(linea1[1])
cara[0][2] = conv(linea1[2])
cara[1][0] = conv(linea2[0])
cara[1][1] = conv(linea2[1])
cara[1][2] = conv(linea2[2])
cara[2][0] = conv(linea3[0])
cara[2][1] = conv(linea3[1])
cara[2][2] = conv(linea3[2])
for i, mat in enumerate(caras, 1):
    if mat == cara:
        print(i)
        exit(0)
copia = copy.deepcopy(cara)
cara[0][0] = copia[0][2]
cara[0][1] = copia[1][2]
cara[0][2] = copia[2][2]
cara[1][0] = copia[0][1]
cara[1][1] = copia[1][1]
cara[1][2] = copia[2][1]
cara[2][0] = copia[0][0]
cara[2][1] = copia[1][0]
cara[2][2] = copia[2][0]
for i, mat in enumerate(caras, 1):
    if mat == cara:
        print(i)
        exit(0)
copia = copy.deepcopy(cara)
cara[0][0] = copia[0][2]
cara[0][1] = copia[1][2]
cara[0][2] = copia[2][2]
cara[1][0] = copia[0][1]
cara[1][1] = copia[1][1]
cara[1][2] = copia[2][1]
cara[2][0] = copia[0][0]
cara[2][1] = copia[1][0]
cara[2][2] = copia[2][0]
for i, mat in enumerate(caras, 1):
    if mat == cara:
        print(i)
        exit(0)
copia = copy.deepcopy(cara)
cara[0][0] = copia[0][2]
cara[0][1] = copia[1][2]
cara[0][2] = copia[2][2]
cara[1][0] = copia[0][1]
cara[1][1] = copia[1][1]
cara[1][2] = copia[2][1]
cara[2][0] = copia[0][0]
cara[2][1] = copia[1][0]
cara[2][2] = copia[2][0]
for i, mat in enumerate(caras, 1):
    if mat == cara:
        print(i)
        exit(0)
print('unknown')
