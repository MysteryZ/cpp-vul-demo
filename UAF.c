#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 32
int main(int argc,char** argv){
    char *buf1;
    char *buf2;
    buf1=(char*) malloc(size);
    printf("buf1:0x%p\n",buf1);
    free(buf1);
    //buf1=null;

    buf2 = (char*)malloc(size);
    printf("buf2:0x%p\n",buf2);

    memset(buf2,0,size);
    printf("buf2:%d\n",*buf2);

    printf("After free\n");
    strncpy(buf1,"hack",5);

    printf("buf2:%s\n\n",buf2);
    free(buf2); 
}