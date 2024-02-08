int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());

    int result = 0, count = 1;
    int subarray_first_element = a[0];

    for (int i = 1; i < a.size(); ++i) {
        if (subarray_first_element == a[i] || subarray_first_element + 1 == a[i])
            count++;
        else {
            if (count > result)
                result = count;
            count = 1;
            subarray_first_element = a[i];
        }
    }

    if (count > result)
        result = count;
    return result;
}
