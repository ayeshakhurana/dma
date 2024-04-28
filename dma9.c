//concatenate 2 strings using dynamic memory allocation
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int l1,l2,i,j=0;
    char *s1,*s2;
    s1=(char*)calloc(sizeof(s1),sizeof(char));
    s2=(char*)calloc(sizeof(s2),sizeof(char));
    if(s1==NULL || s2==NULL){
        printf("memory is not allocated");
    }
    printf("enter the first string: ");
    scanf("%s",*s1);
    printf("enter the second string: ");
    scanf("%s",*s2);
    l1=strlen(s1);
    l2=strlen(s2);
    s1=realloc(s1,(l1+l2));
    for(i=l1;i<(l1+l2);i++){
        *(s1+l1)=*(s2+j);
        j++;
    }
    for(i=0;i<(l1+l2);i++){
        printf("%c",*(s1+i));
    }
    return 0;
}