int formingMagicSquare(vector<vector<int>>& s) {
    int cost = INT_MAX; // Initialize the cost to a large value
    
    // All possible 3x3 magic squares
    vector<vector<vector<int>>> magicSquares = {
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}
    };

    // Iterate through all possible magic squares
    for (const auto& magicSquare : magicSquares) {
        int currentCost = 0; // Initialize the cost for the current magic square
        
        // Calculate the cost for the current magic square
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                currentCost += abs(s[i][j] - magicSquare[i][j]);
            }
        }
        
        // Update the minimum cost if the current cost is smaller
        cost = min(cost, currentCost);
    }
    
    return cost;
}
