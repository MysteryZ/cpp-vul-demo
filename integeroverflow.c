//栈的整数溢出
#include<stdio.h>
#include<string.h>
int main(int argc,char* argv){
    int i;
    char buf[8];
    unsigned short int size;
    char overflow[65550];
    memset(overflow,65,sizeof(overflow));
    printf("please input size:\n");
    scanf("%d",&i);
    size =i;
    printf("size:%d",size);
    printf("i:%d",i);
    if(size > 8){
        return -1;
    }
    //stack overflow
    memcpy(buf,overflow,i);
    return 0;
}