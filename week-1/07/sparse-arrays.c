#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct KeyValue {
    char key[100];
    int value;
};

void processQueries(int n) {
    struct KeyValue mp[1000];
    char t[100];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%s", t);
        int j;
        for (j = 0; j < i; j++) {
            if (strcmp(mp[j].key, t) == 0) {
                mp[j].value++;
                break;
            }
        }
        if (j == i) {
            strcpy(mp[i].key, t);
            mp[i].value = 1;
        }
    }

    int a;
    scanf("%d", &a);
    for (i = 0; i < a; i++) {
        scanf("%s", t);
        int j;
        for (j = 0; j < n; j++) {
            if (strcmp(mp[j].key, t) == 0) {
                printf("%d\n", mp[j].value);
                break;
            }
        }
        if (j == n) {
            printf("0\n");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    processQueries(n);
    return 0;
}
