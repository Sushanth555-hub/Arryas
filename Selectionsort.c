//selection Sorting
#include <stdio.h>
int main(){
    int n,arr[100],temp;

    printf("Enter the size of the array ");
    //inputing the size of an array
    scanf("%d",&n);

    //Inputing the array element
    for(int i=0;i<n;i++){
       printf("Enter the %d Element ",i+1);
       scanf("%d",&arr[i]);
    }

    //Finding the index of minimum element
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
         //Exchanging the element with 1st element
         if(min!=i){
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }

    //printing the sorted array
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}