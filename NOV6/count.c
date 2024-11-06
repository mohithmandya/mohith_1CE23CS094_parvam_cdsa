#include<stdio.h>
int main(){
    int count=0,n;
    printf("enter the number");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }else{
        while(n != 0){
            n/=10;
            count++;
        }
    }
    printf("the numbers in digit is %d\n",count);
    return 0;
}