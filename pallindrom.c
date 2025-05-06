//Check if an Array is a Palindrome
#include <stdio.h>
int main(){
    int arr[100],n,flage=1;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            flage=0;
        }
    }
    if(flage){
        printf("The array is pallindrom");
    }else{
        printf("The array is not pallindrom");
    }
    return 0;
}