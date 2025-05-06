#include <stdio.h>
int main(){
    int n,arr[100],max,min;
    printf("Enter the size of an array=");
    scanf("%d",&n);

    //Taking Input of array Element
    for(int i=0;i<n;i++){
        printf("Enter the %d Element ",i+1);
        scanf("%d",&arr[i]);
    }

    min=max=arr[0];
    for(int i=1;i<n;i++){
         if(arr[i]>max){
            max=arr[i];
         }
         if(arr[i]<min){
            min=arr[i];
         }
    }
    printf("The difference is %d",max-min);
    return 0;
}