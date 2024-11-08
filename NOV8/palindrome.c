#include<stdio.h>
#include<string.h>
int isPalindrome(char str[]){
    int left=0,right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;

}
int main(){
    int n;
    printf("enter the no. of char:\n");
    scanf("%d",&n);
    char str[n];
    printf("enter the string:\n");
    scanf("%s",str);
    if(isPalindrome(str)){
        printf("it is a palindrome");
    }
    else{
        printf("it is not a palindrome");
    }
}