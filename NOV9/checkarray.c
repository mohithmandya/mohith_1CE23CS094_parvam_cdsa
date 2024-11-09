#include<stdio.h>
int main(){
    int arr[]={4,1,5,7,8};
    int n=5;
    int giv=11;
    for (int i=0;i<n;i++){
        if(arr[i]==giv){
            printf("true");
        }
        else{
            printf("false");
            break;
        }
    }
}