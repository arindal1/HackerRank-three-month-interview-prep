#include <iostream>
#include <vector>
#define TOP_OF_RANGE 100

std::vector<int> countOccurrences(int n) {
    std::vector<int> counts(TOP_OF_RANGE, 0);
    for (int i = 0, tmp; i < n; i++) {
        std::cin >> tmp;
        counts[tmp]++;
    }
    return counts;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> counts = countOccurrences(n);

    for (auto& a : counts)
        std::cout << a << " ";
    
    return 0;
}
