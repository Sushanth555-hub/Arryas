#include <stdio.h>
int main(){
    int n,arr[100],temp;
    printf("Enter the size of an array ");
    scanf("%d",&n);

    //input the array elements
    for(int i=0;i<n;i++){
        printf("Enter the %d Element ",i+1);
        scanf("%d",&arr[i]);
    }

    //Comparing the two elements in an array
    for(int i=0;i<n-1;i++){
        int flage=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
             flage=1;
            }
        }
        if(!flage){
            break;
        }
    }


    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}