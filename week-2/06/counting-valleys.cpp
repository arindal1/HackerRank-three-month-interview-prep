#include <iostream>
#include <string>
using namespace std;

int countValleys(int l, string str) {
    int height = 0;
    int count = 0;
    for (int i = 0; i < l; i++) {
        if (str[i] == 'U') {
            height++;
        } else {
            if (height == 0) {
                count++;
            }
            height--;
        }
    }
    if (height < 0) {
        count--;
    }
    return count;
}

int main() {
    int l;
    cin >> l;
    string str;
    cin >> str;
    
    int valleyCount = countValleys(l, str);
    cout << valleyCount << endl;

    return 0;
}
