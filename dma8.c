//reverse and array from a particular index to the last using dynamic memory allocation 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,i,j,m,t;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory not allocated");
    }
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("enter the index from which array is to be reversed: ");
    scanf("%d",&m);
    for(i=m;i<n;i++){
        for(j=m;j<n;j++){
            if(i<=j){
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("the reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}