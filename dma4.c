//input a list of n numbers and print the frequency of a given integer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,m,i,c=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("memory not allocated ");
        exit(0);
    }
    printf("enter the integer whose frequency is to be checked:");
    scanf("%d",&m);
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        if(*(p+i)==m){
            c++;
        }
    }
    printf("the frequency of %d is %d",m,c);
    return 0;
}