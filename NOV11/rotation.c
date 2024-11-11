#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of element");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}