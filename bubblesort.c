#include <stdio.h>
int main(){
    int n,arr[100],temp;
    printf("Enetr the size of an array ");
    sacnf("%d",&n);

    //input the array elements
    for(int i=0;i<n;i++){
        printf("Enter the %d Element ",i+1);
        scanf("%d",arr[i]);
    }

    //Comparing the two elements in an array
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
            n--;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}