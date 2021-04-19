def bubbleSort(lista):
    n = len(lista)
    for j in range(n - 1):
        for i in range(n - 1):
            if lista[i] > lista[i + 1]:
                lista[i], lista[i + 1] = lista[i + 1], lista[i] # trocando os elementos nas posições             


lista = []
x = int(input('How many numbers do You wanna put on your list?'))

for i in range(x):
    num = int(input())
    lista.append(num)

print(f'Not ordered list {lista}')
bubbleSort(lista)
print(f'Ordered list {lista}')
