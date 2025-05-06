//Check if Array is Sorted
#include <stdio.h>
int main(){
    int n,arr[100],f=0;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<arr[i+1]){
            f=1;
        }else if(arr[i]>arr[i+1]){
            f=1;
        }
    }
    if(f){
        printf("The array is sorted");
    }else{
        printf("The array is not sorted");
    }
    return 0;
}