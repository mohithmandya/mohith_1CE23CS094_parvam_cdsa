#include<stdio.h>
int main(){
    int n;
    printf("no. of elements in array");
    scanf("%d",&n);
    int arr[n];
    printf("array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min=arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("smallest no:%d",min);

}