#include <stdlib.h>
#include <stdio.h>

static int  ft_strlen(const char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}


char *ft_strnstr (const char *big_str, const char *little_str, size_t len)
{
    unsigned int  ind;
    unsigned int  sub_ind;
    unsigned int  common_char_counter;
    unsigned int  len_little_string;
    char *  ptr_answer;
   // printf("HI\n");
    ind = 0;
    len_little_string = (unsigned int)ft_strlen(little_str);
    sub_ind = 0;
    
    if (len > ft_strlen(big_str))
        len = ft_strlen(big_str);
   
    while (ind < len - len_little_string + 1)
    {

        while (sub_ind < len_little_string )
        {
            printf("sub_ind = %d ind = %d\n", sub_ind, ind);
            if (big_str[ind + sub_ind] == little_str[sub_ind])
            {
                printf("first  letter is coincided! it's %d\n", ind + sub_ind ); 
                break;        
            }
                
            if (common_char_counter == len_little_string)
                return (void*)big_str + ind;
            common_char_counter++;
            sub_ind++;          
        }
        ind++;
        sub_ind = 0;
        common_char_counter = 0;
    } 
    return (NULL);
}