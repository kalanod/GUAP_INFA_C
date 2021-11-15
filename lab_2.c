#include <stdio.h>
int is_soglas(simb){
    char sogl[] = "qwrtypsdfghklzxcvbnm";
    for (int i = 0; i < 21; i ++){
        if (simb == sogl[i]){
            return 1;
        }
    }
    return 0;
}
void do_func(char a[]){
    int start = 0;
    int i = 0;
    while (a[i] != '\0'){
        i++;
        if (a[i] == ' ' || a[i] == '\n'){
            if (i != 0 && is_soglas(a[i - 1])){
                for (int j = start; j < i; j ++){
                    printf("%c", a[j]);
                }
                printf("\n");
            }
            start = i + 1;

        }
    }}
void test1(){
    /*printf("input: uit oo op er e");
    do_func("uit oo op er e");
    printf("\n\n");
    printf("input: uit oo er e");
    do_func("uit oo er e");
    printf("\n\n");
    printf("input: uit oo o");
    do_func("uit oo o");
     */

    do_func("uitjj\n");
}
int main() {
    //char a[256];
    //printf("hi, user, insert string pleaasee");
    //fgets(a, 256, stdin);
    //do_func(a);
    test1();
}
