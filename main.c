#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int     main()
{
    char p[17];

    printf("%d\n", itoa(-2200000000, p, 17));
    
}