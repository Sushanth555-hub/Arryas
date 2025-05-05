#include <stdio.h>
int main(){
    int n,arry[100],temp;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d Element: ",i+1);
        scanf("%d",&arry[i]);
    }
    for(int i=0;i<n/2;i++){
        temp=arry[i];
        arry[i]=arry[n-1-i];
        arry[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arry[i]);
    }
}