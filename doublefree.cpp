#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char **argv){
    void *p1, *p2, *p3;

    p1=malloc(100);
    printf("malloc:%p\n",p1);
    p2=malloc(100);
    printf("malloc:%p\n",p2);
    p3=malloc(100);
    printf("malloc:%p\n",p3);

    printf("free p1\n");
    free(p1);
    printf("free p3\n");
    free(p3);
    printf("free p2\n");
    free(p2);

    printf("Double free\n");
    free(p2);
}
