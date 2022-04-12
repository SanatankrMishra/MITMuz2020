#include <stdio.h>

int N,I,J;
int a[10];

void input_num(){
    for(I=0;I<N;I++){
        scanf("%d",&a[I]);
    }
}

void display_rev(){
    for(I=N-1;I>=0;I--){
        printf("%d ",a[I]);
    }
}
void display_after_rem(){
    a[N-1]=0;
    
    for(I=N-1;I>=0;I--){
            printf("%d ",a[I]);
    }
}





int main(){

    int n;
    scanf("%d",&n);
    N=n;

    
    input_num();
    display_rev();
    display_after_rem();

    return 0;
}