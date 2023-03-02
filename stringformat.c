#include<stdio.h>
#include<string.h>
int main(int argc,char* argv[]){
    char buff[1024];
    strncpy(buff,argv[1],sizeof(buff)-1);
    printf(buff);
    return 0;
}