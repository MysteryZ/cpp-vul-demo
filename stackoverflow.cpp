#include<stdio.h>
#include<string.h>
void vulfunc(char* str){
    char src[10];
    strcpy(src,str);
}
int main(){
    char* str="AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    vulfunc(str);
    return 0;
}