#include <stdio.h>

int largestNum(int mat[][5],int,int);//14.1
void transpose(int mat[][5],int);//14.2
int isSymmetric(int mat[][5],int);//C-e
void summ(int mat1[][5],int mat2[][5],int res[][5],int n);//C-f
int main(){
    int matrix[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int matrix2[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    };
    int res[5][5];
    // int largest=largestNum(matrix,5,5);
    // printf("largest num is: %d\n",largest);
    transpose(matrix,5);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int symmetric=isSymmetric(matrix,5);
    printf("symmetric ? : %d\n",symmetric);
    summ(matrix,matrix2,res,5);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//pick up the largest numb from a 5X5 matrix
int largestNum(int mat[][5],int row,int col){
    int largest=mat[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]>largest) largest=mat[i][j];
        }
    }
    return largest;
}
//transpose of a square matrix
void transpose(int mat[][5],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
}

//check if a square matrix is symmetric or not
int isSymmetric(int mat[][5],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(mat[i][j]!=mat[j][i]) return 0;
        }
    }
    return 1;
}

void summ(int mat1[][5],int mat2[][5],int res[][5],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
}

//transpose of a matrix(duplicate matrix creation)

int main(){
    int matrix1[][3]={
        {1,2,3},
        {4,5,6}
    };
    int matrix2[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            matrix2[i][j]=matrix1[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;

}

//C-g - mult

//multiply any two 3X3 matrices

int main(){
    int mat1[][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    }, mat2[][3]={
        {3,2,1},
        {6,5,4},
        {9,8,7}
    };
    int res[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum+=mat1[i][k]*mat2[k][j];
            }
            res[i][j]=sum;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//C-h - shifting arrayele rotationally
//call shift for a 4X5 matrix and get it's rows left shifted
int main(){
    int matrix[4][5]={
        {1,2,3,4,5},
        {1,9,3,4,5},
        {1,2,9,4,5},
        {1,2,3,6,5}
    };
    for(int i=0;i<4;i++){
        shift(matrix[i],4,2);
    }
    for(int i=0;i<=4;i++){
        for(int j=0;j<5;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
