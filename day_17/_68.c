//Write a program to Find common elements.

#include <stdio.h>

int main() {
    
int arr1[50];
int arr2[50];
int i,j,n1,n2;
int max;


// 1st array

printf("enter the no. of term of array 1st :");
scanf("%d",&n1);

for(int i=0;i<n1;i++)

{
    printf("enter the %d term of array 1st :",i+1);
    scanf("%d",&arr1[i]);
}
printf("\n");
// 2nd array

printf("enter the no. of term of array 2nd :");
scanf("%d",&n2);

for(int i=0;i<n2;i++)

{
    printf("enter the %d term of array 2nd :",i+1);
    scanf("%d",&arr2[i]);
}
printf("\n");
//logic
printf("Common elements are : ");
for(i=0;i<n1;i++){
    for(j=0;j<n2;j++){

        if(arr1[i]==arr2[j])
        {printf("%d\t",arr1[i]);
        break;}

    }
}

return 0;
}

// it's print multiple time element if it is multiple times in array