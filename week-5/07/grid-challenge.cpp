string gridChallenge(vector<string> grid) {
    int n = grid.size();
    
    // Sort each row of the grid
    for (string& row : grid) {
        sort(row.begin(), row.end());
    }
    
    // Check if each column is sorted
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (grid[j - 1][i] > grid[j][i]) {
                return "NO";
            }
        }
    }
    
    return "YES";
}
