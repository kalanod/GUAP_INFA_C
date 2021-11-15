#include <stdio.h>
int main() {
    int a, b, c;
    printf("hi, user, insert digital pleaasee")
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (c != 0) {
        printf("%d", c % b);
    } else{
        printf("bad 0 div");
    }
}