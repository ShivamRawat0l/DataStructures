#include<stdio.h>

int sortChecker (int a[]  , int n ) {
    if(n==1){
        return 1;
    }
    else if(a[n-1]>=a[n-2]){
        
        sortChecker(a, n-1);
    }
    else{
        return 0;
    }

}

void main(){
    int a [10] = {0,1,2,3,4,5,6,7,8,9};
    int size = sizeof(a)/sizeof(int);
    int b;
    b=sortChecker(a, size );
    if(b)
    printf("SORTED");
    else
    printf("NAH "); 
}