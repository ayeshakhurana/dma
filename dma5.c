//check if 2 strings are anagrams or not
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char *a,int n){
    char t;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(a+i)>*(a+j)){
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
}
int main(){
    int l1,l2,f=0,i;
    char *s1,*s2;
    s1=(char*)calloc(100,sizeof(char));
    s2=(char*)malloc(100*sizeof(char));
    if(s1==NULL || s2==NULL){
        printf("memory is not allocated");
    }
    printf("enter first string: ");
    scanf("%s",s1);
    printf("enter the second string: ");
    scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    sort(s1,l1);
    sort(s2,l2);
    if(l1!=l2){
        printf("no");
    }
    for(i=0;i<l1;i++){
        if(*(s1+i)==*(s2+i)){
            f=1;
        }
        else{
            f=0;
        }
    }
    if(f==0){
        printf("no");
    }
    else{
        printf("yes");
    }
    return 0;
}