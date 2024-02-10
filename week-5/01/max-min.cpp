int maxMin(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
    int ans=1e9;
    for(int i=k-1;i<arr.size();i++){
        ans=min(arr[i]-arr[i-k+1],ans);
    }
    return ans;
}
