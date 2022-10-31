# target array must be sorted
def binary_search(array, target):
    first = 0
    last = len(array) - 1

    while first <= last:
        mid = (first + last) // 2
        if array[mid] == target:
            return mid
        elif array[mid] > target:
            last = mid - 1
        elif array[mid] < target:
            first = mid + 1

    return -1
