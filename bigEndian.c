#include <stdio.h>
#include <stdlib.h>

int main()
{
    char buf[]={0x02,0x00};
    unsigned number = buf[0] | buf[1] << 8;
    printf("Hello world! %d\n",number);
    return 0;
}
