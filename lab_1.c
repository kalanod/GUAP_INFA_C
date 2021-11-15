#include <stdio.h>
float abs(float num){
    if (num > 0){
        return num;
    }
    return num * -1.0f;
}
int main() {
    float a;
    printf("hi, user, insert digital pleaasee");
    scanf("%f", &a);

    if (a == 1.0){
        printf("%d", 0);
        return 1;
    }
    if (a > 1) {
        float b = 2;
        while (b < a){
            b = b* 2;
        }
        if ((b - a) > (b / 2 - a)) {
            printf("%f", (b / 2));
        } else {
            printf("%f", (b));
        }
    } else{
        float b = 1;
        while (b > a){
            b = b / 2;
        }
        if (abs(a-b) > abs(a - b * 2)) {
            printf("%f", (b * 2));
        } else {
            printf("%f", (b));
        }
    }


}

