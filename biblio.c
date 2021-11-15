float abs(float num){
    if (num > 0){
        return num;
    }
    return num * -1.0f;
}
int len(char *arr){
    for (int i = 0; arr[i] != '\0' || arr[i] != '\n'; i ++){
        if (arr[i + 1] == '\0' || arr[i + 1] == '\n'){
            return i + 1;
        }
    }
    return 0;
}
void printS(char *arr){
    int l = len(arr);
    for (int i = 0; i < l; i++){
        if (arr[i] == '\0'){
            printf("%c",arr[i]);
            return;
        }
        printf("%c",arr[i]);
    }
    printf("%c", '\n');
}
void sort(int *arr, int len){
    //int len = int_len(arr);
    for (int i = 0; i < len * len; i++){
        for (int j = 0; j < len - 1; j++){
            if (arr[j] > arr[j + 1]){
                int prom = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = prom;
            }
        }
    }
}
int print(int *arr, int len){
    //int len = int_len(arr);
    for (int i = 0; i < len; i++){
        printf("%d ",arr[i]);
    }
    printf("%c", '\n');
}

int is_soglas(simb){
    char sogl[] = "qwrtypsdfghklzxcvbnm";
    for (int i = 0; i < 21; i ++){
        if (simb == sogl[i]){
            return 1;
        }
    }
    return 0;
}

