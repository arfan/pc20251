#include <stdio.h>

int main()
{
    printf( "1 %d\n", 455 );
    printf( "2 %i\n", 455 ); /* i same as d in printf */
    printf( "3 %d\n", +455 );
    printf( "4 %d\n", -455 );
    printf( "5 %hd\n", 32000 );
    printf( "6 %ld\n", 2000000000 );
    printf( "7 %o\n", 455 );
    printf( "8 %u\n", 455 );
    printf( "9 %u\n", -455 );
    printf( "10 %x\n", 455 );
    printf( "11 %X\n", 455 );

    return 0;
}