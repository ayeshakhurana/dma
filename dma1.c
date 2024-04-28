//calculate and display sum of n numbers using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum=0,*ptr,i,n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("memory is not allocated");
    }
    printf("enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("the sum is %d",sum);
    return 0;
    
}