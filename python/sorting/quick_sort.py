from random import randint


def quicksort(array):
    if len(array) < 2:
        return array

    low, same, high = [], [], []

    pivot_elem = array[randint(0, len(array) - 1)]

    for i in array:
        if i < pivot_elem:
            low.append(i)
        elif i == pivot_elem:
            same.append(i)
        elif i > pivot_elem:
            high.append(i)

    return quicksort(low), same, quicksort(high)
