#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* processInput(char* s) {
    static char output[1000];
    char opr = s[0], typ = s[2];
    int i, j = 0;
    for (i = 4; s[i] != '\0'; i++) {
        if (opr == 'C') {
            if (i == 4 && typ == 'C') {
                output[j++] = toupper(s[i]);
                continue;
            }
            if (s[i] == ' ') continue;
            if (i != 4 && s[i - 1] == ' ') {
                output[j++] = toupper(s[i]);
                continue;
            }
            output[j++] = s[i];
        } else {
            if (s[i] == '(') break;
            if (isupper(s[i]) && i != 4) {
                output[j++] = ' ';
                output[j++] = tolower(s[i]);
                continue;
            }
            if (typ == 'C' && i == 4) {
                output[j++] = tolower(s[i]);
                continue;
            }
            output[j++] = s[i];
        }
    }
    if (opr == 'C' && typ == 'M') {
        output[j++] = '(';
        output[j++] = ')';
    }
    output[j] = '\0';
    return output;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    char s[1000];
    while (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\r\n")] = '\0';
        printf("%s\n", processInput(s));
    }
    return 0;
}
