//input a list and update all even numbers with their squares and odd numbers with their cubes
#include<stdio.h>
#include<stdlib.h>
void square(int *n){
    *n=*n * *n;
}
void cube(int *n){
    *n=*n * *n * *n;
}
int main(){
    int m,i,*p;
    printf("enter number of elements: ");
    scanf("%d",&m);
    p=(int*)calloc(m,sizeof(int));
    if(p==NULL){
        printf("memory allocation failes");
        exit(0);
    }
    printf("enter the elements");
    for(i=0;i<m;i++){
        scanf("%d",(p+i));
    }
    for(i=0;i<m;i++){
        if(*(p+i)%2==0){
            square(&*(p+i));
        }
        else{
            cube(&*(p+i));
        }

    }
    printf("the updates list is: \n");
    for(i=0;i<m;i++){
        printf("%d\n",*(p+i));
    }
    return 0;

}