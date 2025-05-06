#include <stdio.h>
int main(){
    int n,arry[100],k,insert;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d number ",i+1);
        scanf("%d",&arry[i]);
    }
    printf("Insert the Element ");
    scanf("%d",&insert);
    printf("Enter the position ");
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(i==k-1){
            for(int j=i;j<=n+1;j++){
                arry[j]=arry[j+1];
            }
            arry[k-1]=insert;
        }
    }
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arry[i]);
    }
    return 0;
}