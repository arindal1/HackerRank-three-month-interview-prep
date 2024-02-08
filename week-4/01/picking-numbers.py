def picking_numbers(a):
    a.sort()

    result = 0
    count = 1
    subarray_first_element = a[0]

    for i in range(1, len(a)):
        if subarray_first_element == a[i] or subarray_first_element + 1 == a[i]:
            count += 1
        else:
            result = max(result, count)
            count = 1
            subarray_first_element = a[i]

    result = max(result, count)
    return result
