//Write a program to Transpose matrix.

#include <stdio.h>

int main() {
    int r,c;
    int arr[20][20];
    int i,j;
    int tra[20][20];
    
printf("enter the no. of row and coloum :\n");
scanf("%d %d",&r,&c);

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        printf("enter [%d][%d] :",i+1,j+1);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        printf("%d ",arr[i][j]);

    }
    printf("\n");
}
printf("\n\n");
// for transpose

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        tra[i][j]=arr[j][i];

    }
}

for(i=0;i<r;i++){
    for(j=0;j<c;j++){

        printf("%d ",tra[i][j]);

    }
    printf("\n");
}

    return 0;
}