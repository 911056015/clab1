#include<stdio.h>
int main()
{
    unsigned int h=1,a=0-1;
    unsigned int c=0;
    while(h !=0) {
        h=h<<1;
        ++c;
    }
    printf("%d\n%u\n",c,a);
    return 0;
}