#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,n,i,m;
    printf("enter the original number of elements: ");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    if(p==NULL){
        printf("memory allocation failed");
        exit(0);
    }
    printf("enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("the original array is: ");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    printf("enter the amount to be extended: ");
    scanf("%d",&m);
    p=realloc(p,(n+m)*sizeof(int));
    printf("enter further elements: ");
    for(i=n;i<n+m;i++){
        scanf("%d",(p+i));
    }
    printf("the updated array is: ");
    for(i=0;i<n+m;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}