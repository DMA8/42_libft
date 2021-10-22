#include <stdlib.h>
#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void *ans;

    if (nmemb + size < 2)
        return (NULL);
    ans = (void*)malloc(nmemb * size);
    return ans;

}