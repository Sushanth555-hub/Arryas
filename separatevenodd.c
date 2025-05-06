//Separate Even and Odd Elements into Two Arrays
#include <stdio.h>
int main(){
    int n,arr[100],odd[100],even[100],k=0,h=0;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     printf("Enter the %d Element ",i+1);
     scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
             even[k]=arr[i];
              k++;
        }else{
              odd[h]=arr[i];
              h++;
            }
        }
    printf("Even numbers are ");
    for(int i=0;i<k;i++){
        printf("%d ",even[i]);
    }
    printf("Odd numbers are ");
    for(int i=0;i<h;i++){
        printf("%d ",odd[i]);
    }
    return 0;
}