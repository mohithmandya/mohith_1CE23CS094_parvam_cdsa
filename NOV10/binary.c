#include<stdio.h>
int isPrsesent(int n,int arr[],int target){
    int left=0,right=-1;
    while (left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target<arr[mid]){
            right-mid-1;
        }
        else{
            left=mid+1;
        }
        
    }
    return -1;
}
int main(){
    int n;
    printf("No. of elements in array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target element\n");
    scanf("%d",&target);
    if(isPrsesent(n,arr, target)){
        printf("Element is present\n");
    }else{
        printf("Element is not present\n");
    }
}