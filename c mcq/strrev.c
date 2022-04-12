#include <stdio.h>

int strlg(char *arr){
    int len = 0;
    while(arr[len]!='\0'){
        len++;
    }
    return len;
}

void strrev(char *arr){
    for(int i=0; i<strlg(arr)/2; i++){
        char k;
        k = *(arr+strlg(arr)-i-1);
        *(arr+strlg(arr)-i-1) = *(arr+i);
        *(arr+i) = k;
    }
}

void strcat(char *arr1, char *arr2){
    int i = 0;
    while(arr1[i]!='\0'){
        i++;
    }
    int j = 0;
    while(arr2[j]!='\0'){
        arr1[i] = arr2[j];
        i++;
        j++;
    }
    arr1[i] = '\0';
}

int main(){

    int len=0;
    char a[]="dark";
    char b[]="signature";

    for(int i=0; i<strlg(a); i++){
        printf("%c\n", a[i]);
    }
    
    strrev(a);

    for(int i=0; i<strlg(a); i++){
        printf("%c\n", a[i]);
    }

    strcat(a,b);

    printf("%s\n", a);



    return 0;
}