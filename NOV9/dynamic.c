#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Total no. of elements\n");
    scanf("%d",&n);
    int *dynamic=(int*)malloc(n*sizeof(int));
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&dynamic[i]);
    }
    int extra;
    printf("No. of extra elements\n");
    scanf("%d",&extra);
    dynamic=realloc(dynamic,(n+extra)*sizeof(int));
    printf("Extra elements\n");
    for(int i=n;i<(n+extra);i++){
        scanf("%d",&dynamic[i]);
    }
    printf("After reallocation\n");
    for (int i=0;i<(n+extra);i++){
        printf("%d ",dynamic[i]);

    }

}