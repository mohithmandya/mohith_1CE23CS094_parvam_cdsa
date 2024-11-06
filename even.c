#include<stdio.h>
int main (){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num & 1){
        printf("%d is odd", num);
    }else{
        printf("%d is evens", num);
    }
    return 0;


}