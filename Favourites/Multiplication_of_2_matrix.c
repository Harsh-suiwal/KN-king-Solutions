#include<stdio.h>
#include<stdlib.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int sum=0;
    int a[ROW1][COL1], b[ROW2][COL2], result[ROW1][COL2];
    printf("Enter the first matrix\n");
    for(int i=0;i<ROW1;i++)
    {
        for(int j=0;j<COL1;j++){
        // printf("Enter the %d %d element of first matrix\n",i,j);
        scanf("%d",&a[i][j]);}
    }
system("cls");
    printf("Enter the second matrix\n");
    for(int i=0;i<ROW2;i++)
    {
        for(int j=0;j<COL2;j++){
    //     printf("Enter the %d %d element of second matrix\n",i,j);
        scanf("%d",&b[i][j]);}
    }
 
    for(int i=0;i<ROW1;i++){
    for(int j=0;j<COL2;j++)
        {
            // Calculating the multiplication of both matrices
            // k goes from 0 to n-1 for [i][n] and [n][j] both
            for(int k=0;k<ROW2;k++){
                sum+= a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }

    system("cls");
printf("The Multiplication Answer is: \n");
    //printf the result

    for(int i=0;i<ROW1;i++){
        for(int j=0;j<COL2;j++)
        {
            printf("%d \t",result[i][j]);
        }
    printf("\n");
    }
    return 0;
}
