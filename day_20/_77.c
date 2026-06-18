#include <stdio.h>
int main(){
int a,b,x,y,i,j;
int m;
int A[10][10];
int B[10][10];
int C[10][10];

printf("enter the no. of row of 1st matrix :");
scanf("%d",&a);

printf("enter the no. of coloum of 1st matrix :");
scanf("%d",&b);

printf("enter the no. of row of 2nd matrix :");
scanf("%d",&x);

printf("enter the no. of coloum of 2nd matrix :");
scanf("%d",&y);

printf("enter the element of matrix 1st matrix\n");
for(i=1;i<=a;i++){
    for(j=1;j<=b;j++){
        printf( "enter the 1st matrix term A[%d][%d]",i,j);
        scanf("%d",&A[i][j]);
    }
}
printf("enter the element of matrix 2nd matrix\n");
for(i=1;i<=x;i++){
    for(j=1;j<=y;j++){
        printf( "enter the 2nd matrix term B[%d][%d]",i,j);
        scanf("%d",&B[i][j]);
    }
}
if(b != x){
    printf("Cannot multiply matrices: columns of A must equal rows of B\n");
     return 1;
}
//MULTIPLICATION PROCESS

for(i=1;i<=a;i++){
    for(j=1;j<=y;j++){
        C[i][j] = 0;
        for(int k=1; k<=x; k++)//here we can write b or x both....
        {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}

// Output the result
printf("Result matrix :\n");
for(i=1;i<=a;i++){
    for(j=1;j<=y;j++){
        printf("%d ", C[i][j]);
    }
    printf("\n");
}


return 0;
}

