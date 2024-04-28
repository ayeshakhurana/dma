#include<stdio.h>
#include<stdlib.h>
int main(){
    int *element,i,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    element=(int*)malloc(n*sizeof(int));
    if(element==NULL){
        printf("memory not allocated");
        exit(0);
    }
    else{
        printf("enter the elements: ");
        for(i=0;i<n;i++){
            scanf("%d",element+i);
        }
        for(i=0;i<n;i++){
            if(*element+i >*element){
                *element=*(element +i);
            }
        }
        printf("the largest element is: %d",*element);

    }
    return 0;
}