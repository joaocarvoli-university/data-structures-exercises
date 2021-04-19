def insertionSort(list):
    n = len(list)
    for i in range(1, n):
        key = list[i]
        j = i - 1
        while j >= 0 and list[j] > key:
            list[j + 1] = list[j]
            j = j - 1
        list[j + 1] = key


list = []
x = int(input('How many numbers do You wanna put on your list?'))

for i in range(x):
    num = int(input())
    list.append(num)

print(f'Not ordered list {list}')
insertionSort(list)
print(f'Ordered list {list}')