#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>

using namespace std;

string processInput(const string& s) {
    string output;
    char opr = s[0], typ = s[2];
    for (int i = 4; i < s.size(); i++) {
        if (opr == 'C') {
            if (i == 4 && typ == 'C') {
                output += toupper(s[i]);
                continue;
            }
            if (s[i] == ' ') continue;
            if (i != 4 && s[i - 1] == ' ') {
                output += toupper(s[i]);
                continue;
            }
            output += s[i];
        } else {
            if (s[i] == '(') break;
            if (isupper(s[i]) && i != 4) {
                output += ' ';
                output += tolower(s[i]);
                continue;
            }
            if (typ == 'C' && i == 4) {
                output += tolower(s[i]);
                continue;
            }
            output += s[i];
        }
    }
    if (opr == 'C' && typ == 'M') {
        return output + "()";
    } else {
        return output;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    while (getline(cin, s)) {
        s.erase(remove(s.begin(), s.end(), '\r'), s.end());
        cout << processInput(s) << endl;
    }
    return 0;
}
