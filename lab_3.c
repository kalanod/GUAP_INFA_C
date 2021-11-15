#include <stdio.h>

#include "biblio.c"
int do_func(int arr[], int arr2[]){

    size_t a1 = sizeof(arr);
    size_t a2 = sizeof(arr2);
    const int len = a1 + a2;
    int res[999];
    for (int i = 0; i < a1; i ++){
        res[i] = arr[i];
    }
    for (int i = 0; i < a2; i ++){
        res[a1 + i] = arr2[i];


    }
    print(res, len);
    sort(res, len);
    print(res, len);
}
void test(){
    //Укажите два массива для сортировки с числами и суммарной длинной меньше 999 элементов
    int a[] = {3, 8, 5, 18};
    int b[] = {105, 4, 22, 33};
    do_func(a, b);
}
int main() {
    test();
}