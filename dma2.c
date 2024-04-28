//sort elements of an array input through dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,i,j,t;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(*(p+i)>*(p+j)){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("the sorted list is: ");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}