#include<stdio.h>
int main(){
    int index;
    int array[3]={111,222,333};
    printf("please input index:\n");
    scanf("%d",&index);
    printf("array[%d]=%d\n",index,array[index]);
    //写越界，造成溢出；
    array[index]=233;
    return 0;
}