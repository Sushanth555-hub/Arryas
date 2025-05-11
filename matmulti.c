#include <stdio.h>
int main(){
    int row1,row2,col1,col2;

    //taking input of numbers of row and column of the both matrix
    printf("Enter the number of Rows and columns of 1st matrix ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the number of Rows and columns of 2st matrix ");
    scanf("%d %d",&row2,&col2);

     // Check for valid multiplication
     if (col1 != row2) {
        printf("Matrix multiplication not possible! Columns of 1st matrix must equal rows of 2nd.\n");
        return 1;
    }

    int mat1[row1][col1],mat2[row2][col2],mat[row1][col2];
    
    //Taking input of element of both matix
    printf("Enter the element of the of 1st matrix \n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            printf("Enter the element mat1[%d][%d]=",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Enter the element of the of 2nt matrix \n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            printf("Enter the element mat2[%d][%d]=",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    //initilization of resultant matrix
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            mat[i][j]=0;
        }
    }
    //cheking the condtion for matrix multiplication
    
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                for(int k=0;k<col1;k++){
                    mat[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }

        //printing the result
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%4d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}