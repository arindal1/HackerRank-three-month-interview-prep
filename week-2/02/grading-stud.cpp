#include <iostream>
using namespace std;

int roundGrade(int grade) {
    if (grade >= 38) {
        int rem = grade % 5;
        if (rem >= 3) 
            grade += 5 - rem;
    }
    return grade;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int grade;
        cin >> grade;
        cout << roundGrade(grade) << endl;
    }

    return 0;
}
