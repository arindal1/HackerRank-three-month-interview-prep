#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string &s) {
    int len = s.length();
    string ans = "pangram";
    if (len < 26) {
        ans = "not pangram";
    }

    int arr[26] = {0};

    for (int i = 0; i < len; i++) {
        arr[toupper(s[i]) - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (!arr[i]) {
            ans = "not pangram";
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
