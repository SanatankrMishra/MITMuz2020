#include <stdio.h>

int i,j,N,a[100],comp;

void input(){
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
}

void linear_search(int it){
    for(int i=0;i<N;i++){
        comp++;
        if(a[i]==it){
            printf("Match found at index %d\n",i);
            printf("No. of comparisons made are %d\n",comp);
            break;
        }
    }
    printf("Match not found\n");
}

void binary_search(int its,int lo,int hi){
    
    int mid= lo+(hi-lo)/2;
    if(mid<lo){
        printf("Match not found\n");
        
    }
    else if(a[mid]==its && mid>lo){
        printf("Match found at %d index",mid);
    }
    else if(a[mid]>its && mid>lo){
        hi=mid;
        binary_search(its,lo,hi);
    }
    else if(a[mid]<its && mid>lo){
        lo=mid;
        binary_search(its,lo,hi);
    }
    

}

int main(){
    int n;
    scanf("%d",&n);
    N=n;
    input();
    // linear_search(17);
    binary_search(19,0,N-1);



    return 0;
}