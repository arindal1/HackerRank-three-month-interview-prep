    int n = arr.size(), ans;
    sort(arr.begin(), arr.end());

    if (n % 2 == 1)
        ans = arr[(n - 1) / 2];
    else
        ans = (arr[n/2 - 1] + arr[n/2])/2;
    return ans;

// function logic
