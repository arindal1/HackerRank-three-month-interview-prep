vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<int> result;
    vector<vector<int>> arrayList(n);
    int lastAnswer = 0;

    for (const auto& query : queries) {
        int queryType = query[0];
        int x = query[1];
        int y = query[2];
        int sequenceIndex = (x ^ lastAnswer) % n;

        if (queryType == 1) {
            arrayList[sequenceIndex].push_back(y);
        } else if (queryType == 2) {
            vector<int>& sequence = arrayList[sequenceIndex];
            int size = sequence.size();
            int tempIndex = y % size;
            lastAnswer = sequence[tempIndex];
            result.push_back(lastAnswer);
        }
    }

    return result;
}
