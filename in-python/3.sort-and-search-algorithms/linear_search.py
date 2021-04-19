def linear_search(array, item):
    # It returns the index if the item is in the list or None if isn't
    for i in range(len(array)):
        if array[i] == item:
            return i
        
    return None

### Worse case is the size list, therefore 0(N), linear function
### Interaction with user bellow

array1 = [1,2,3,4,6,7,8,9,10,11,12,13,14,15,15]
item = int(input('What is the number that are you searching for?'))
result = linear_search(array1, item)

if result is None:
    print("This number wasn't found")
else:
    print(f'This number index is: {result}')
