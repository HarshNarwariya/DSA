array = [1, 2, 5, 4, 3, 1, 2, 8]

def swap(array, i, j):
        array[i], array[j] = array[j], array[i]

def partition1(array, low, high):
    pivot = array[high]
    i = low - 1
    for j in range(low, high):
        if array[j] <= pivot:
            i += 1
            swap(array, i, j)
    swap(array, i + 1, high)
    return i + 1

def partition2(array, low, high):
    pivot = array[low]
    p = low
    q = high
    while p < q:
        while array[p] <= pivot:
            p += 1
        while array[q] > pivot:
            q -= 1
        if p < q:
            swap(array, p, q)
    swap(array, low, q)
    return q

def quick_sort(array, low, high):
    if low < high:
        # pivot = partition1(array, low, high)
        pivot = partition2(array, low, high)

        quick_sort(array, low, pivot - 1)
        quick_sort(array, pivot + 1, high)

quick_sort(array, 0, len(array) - 1)
print(array)


