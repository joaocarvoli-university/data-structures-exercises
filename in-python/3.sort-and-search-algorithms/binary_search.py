def binary_search(array, item , begin = 0, end = None):
    if end is None:
        end = len(array) - 1
    if begin <= end:
        m = (begin + end)// 2
        if array[m] == item:
            return m
        if item < array[m]:
            return binary_search(array, item, begin, m - 1)
        else:
            return binary_search(array, item, m + 1, end)
    return None


# For You use this search algorithm it's necessary that the list be ordered by any algorithm

array1 = [1,2,3,4,6,7,8,9,10,11,12,13,14,15,15]
item = int(input('What is the number that are you searching for?'))
result = binary_search(array1, item)

if result is None:
    print("This number wasn't found")
else:
    print(f'This number index is: {result}')
