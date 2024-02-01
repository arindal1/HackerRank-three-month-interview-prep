#include <iostream>
using namespace std;

int findDiagonalDifference(int N) {
	int sumdiag1 = 0, sumdiag2 = 0; 
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			int no; 
			cin >> no; 
			if (i == j)
				sumdiag1 += no;
			if (i + j == N - 1)
				sumdiag2 += no; 
		}
	}
	return abs(sumdiag1 - sumdiag2);
}
                                                                                                                    
int main() {  
	int N; 
	cin >> N; 
                                                                                                                                
	cout << findDiagonalDifference(N) << endl;
    return 0;
}
