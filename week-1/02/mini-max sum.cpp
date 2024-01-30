/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */


void miniMaxSum(vector<int> arr) {
    long long min = LLONG_MAX , max = LLONG_MIN , sum ;
    for(int i = 0 ;i < arr.size() ; ++i) {
        sum = 0;
        for(int j = 0; j < arr.size() ; ++j) {
            if(i != j)
                sum += arr[j];
        }
        if (sum > max)   max = sum;
        if (sum < min)  min = sum;
    }
    cout << min << " " << max << endl;
}
