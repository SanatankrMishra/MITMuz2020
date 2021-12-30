#include <stdio.h>


void fibn(int num){
    int no = num - 2;
        while(no--){
            static int a1 = 1;
            static int a2 = 1;
            int a3 = a1+a2;

            if(a1 == 1 && a2 ==1){
                printf("%d %d ", a1,a2);
            }

            a1 = a2;
            a2 = a3;
            printf("%d ", a3);
        }
        

        
    
}


int main(){

    int a = 3;
    fibn(19);



    return 0;
}