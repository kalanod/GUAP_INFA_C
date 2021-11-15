#include <stdio.h>
#include "biblio.c"

int main() {
    char a[10] = "ae w";
    char arr[10][25];
    //fgets(a, 256, stdin);

    int start = 0;
    int id = 0;
    int a_len = len(a);
    for (int i = 0; i < a_len; i++) {
        if (a[i] == ' ') {
            id += 1;
            start = 0;
            continue;
        }
        if (a[i] == '\n'){
            break;
        }

        arr[id][start] = a[i];
        start++;
        }
    printf("%c", arr[1][0]);


}