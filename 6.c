#include <stdio.h>
#include <string.h>
char strA[]='ABC';
char strB[]='ABCD';
int main()
{
    int c=strcmp("B","C");
    printf("B-C±o¨ì %d\n",c);
    c=strcmp(strA,strB);
    printf("%s %s±o¨ì%d\n",strA,strB,c)
}
