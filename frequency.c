#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];

    //Taking the input of an arrays
    for(int i=0;i<n;i++){
        printf("Enter the %d element ",i+1);
        scanf("%d",&arr[i]);
    }

int count=0;

for(int i=0;i<n;i++){
   int isrepeate=0;

   //Cheking weather the given rrays are repeated or not
    for(int j=0;j<i;j++){
    if(arr[i]==arr[j]){
        isrepeate =1;
        break;
    }
}

//if the number is repeated skip the itration
if(isrepeate){
    continue;
}

//counting the frequency
int fre=0;
for(int j=0;j<n;j++){
    if(arr[i]==arr[j]){
       fre++;
    }
}

//Printing the frequency of repetation
    if(fre>1){
       printf("%d Repeated -> %d\n",arr[i],fre) ;
       count++;
    }
}

printf("The total number of the repeated terms are =%d",count);
return 0;    
}