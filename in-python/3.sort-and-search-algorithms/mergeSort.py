def mergeSort(list, begin = 0, end = None):
    if end is None:
        end = len(list)

    if(end - begin > 1):
        middle = (end + begin)//2
        mergeSort(list, begin, middle)
        mergeSort(list, middle, end)
        merge(list, begin, middle, end)

def merge(list, begin, middle, end):
    left = list[begin:middle]
    right = list[middle:end]
    top_left, top_right = 0, 0

    for k in range(begin, end):
        if top_left >= len(left):
            list[k] = right[top_right]
            top_right = top_right + 1 
        elif top_right >= len(right):
            list[k] = left[top_left]
            top_left = top_left + 1

        elif left[top_left] < right[top_right]:
            list[k] = left[top_left]
            top_left = top_left + 1
        else:
            list[k] = right[top_right]
            top_right = top_right + 1


# TESTING VALUES

list = []
x = int(input('How many numbers do You wanna put on your list?'))

for i in range(x):
    num = int(input())
    list.append(num)

print(f'Not ordered list {list}')
mergeSort(list)
print(f'Ordered list {list}')
