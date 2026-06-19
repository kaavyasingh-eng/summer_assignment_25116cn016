//Write a program to Find maximum frequency element.

#include <stdio.h>

int main() {
    
int arr[50];
int i,j,n;

int max_feq=0;
int target;
int feq=0;
int max_element;

printf("enter the no. of term of array :");
scanf("%d",&n);

for(int i=0;i<n;i++)

{
    printf("enter the %d term of array :",i+1);
    scanf("%d",&arr[i]);
}

// logic

for(int i=0;i<n;i++){
    target=arr[i];
    feq=0;
    for(j=0;j<n;j++){

      if(target==arr[j])
      feq++;
    }
    if(max_feq<=feq)
    {max_feq=feq;
    max_element=target;
    }

}
printf("element :%d\n",max_element);
printf("max feq :%d",max_feq);

return 0;
}