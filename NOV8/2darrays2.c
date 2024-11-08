#include<stdio.h>
int main(){
    int r;
    printf("enter the row size");
    scanf("%d",&r);
    int c;
    printf("enter the coloumn size");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Printing the values of array\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}