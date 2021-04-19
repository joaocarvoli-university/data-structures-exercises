def selectionSort(list):
    n = len(list)
    for j in range(n - 1):
        min_index = j
        for i in range(j,n):
            if list[i] < list[min_index]:
                min_index = i
        if list[j] > list[min_index]:
            list[j], list[min_index] = list[min_index], list[j]


list = []
x = int(input('How many numbers do You wanna put on your list?'))

for i in range(x):
    num = int(input())
    list.append(num)

print(f'Not ordered list {list}')
selectionSort(list)
print(f'Ordered list {list}')

