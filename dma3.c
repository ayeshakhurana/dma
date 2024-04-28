//store a charachter string then replace it with a larger string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,i;
    char *ch;
    ch=(char*)calloc(10,sizeof(char));
    if(ch==NULL){
        printf("memory not allocated");
        exit(0);
    }
    else{
        printf("memory of size 10 is allocated\n");
        strcpy(ch,"ayesha");
        printf("value stored: %s\n",ch);
        ch=realloc(ch,15*sizeof(char));
        if(ch==NULL){
            printf("reallocation failed");
            exit(0);
        }
        else{
            printf("memory is reallocated to size 15\n");
            strcpy(ch,"computer");
            printf("updated value is: %s\n",ch);
        }
    }
    return 0;
}