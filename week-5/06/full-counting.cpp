void countSort(vector<vector<string>> arr) {
    vector<vector<string>> idxArray(100);
    for (int i = 0; i< arr.size(); i++) {
        int idx = atoi(arr[i][0].c_str());
        if(i < arr.size()/2)
            idxArray[idx].push_back("-");
        else 
            idxArray[idx].push_back(arr[i][1].c_str());
    }
    for(auto stringList : idxArray) {
        for(string s: stringList) {
            cout << s <<" ";
        }
    }
}
