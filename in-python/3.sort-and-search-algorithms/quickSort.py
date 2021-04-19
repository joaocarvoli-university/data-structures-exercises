def quickSort(list, begin = 0, end = None):
    if end is None:
        end = len(list) - 1
    if begin < end:
        pivot = partition(list, begin, end)
        quickSort(list, begin, pivot - 1)
        quickSort(list, pivot + 1, end)

def partition(list, begin, end):
    pivot = list[end]
    flag1 = begin

    for flag2 in range(begin, end):
        if list[flag2] <= pivot:
            list[flag1], list[flag2] = list[flag2], list[flag1]
            flag1 = flag1 + 1
    list[flag1], list[end] = list[end], list[flag1]
    return flag1

# observation
# TESTING VALUES

list = []
x = int(input('How many numbers do You wanna put on your list?'))

for i in range(x):
    num = int(input())
    list.append(num)

print(f'Not ordered list {list}')
quickSort(list)
print(f'Ordered list {list}')

