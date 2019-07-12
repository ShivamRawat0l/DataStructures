#include<stdio.h>

void Hanoi (char from ,char  mid , char to ,int  n) {
    
if(n==1)
    printf("%c to %c \n",from,to);

        else{

    Hanoi(from , to , mid,n-1) ;
                        printf("%c to %c \n",from,to);
    Hanoi(mid , from , to,n-1) ;

        }

}
void main(){
    Hanoi('A','B','C',3);
}