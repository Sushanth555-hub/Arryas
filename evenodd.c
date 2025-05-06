//Count the even and odd number in the array
#include <stdio.h>
int main(){
    printf("Enter the size of an array=");
    int n,arr[100],odd=0,even=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d Element ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Even numbers are %d",even);
    printf("\n Odd numbers are %d",odd);
}