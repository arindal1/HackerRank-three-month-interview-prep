/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {
    float countPositive = 0;
    float countNegative = 0;
    float n = arr.size();
    for(int i;i<n;i++) {
        if (arr[i] > 0)
            countPositive++; 
        else if (arr[i] < 0)
            countNegative++;        
    }
    float countZero = n - countNegative - countPositive;
    cout << showpoint << setprecision(6) << countPositive/n << endl;
    cout << showpoint << setprecision(6) << countNegative/n << endl;
    cout << showpoint << setprecision(6) << countZero/n << endl;
}
