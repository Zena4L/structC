#include <stdio.h>

/*
* @d - Array of structures
*/
struct Haiku
{
    int year_start;
    int year_end;
    char author[16];
    char str1[32];
    char str2[32];
    char str3[32];
};

typedef struct Haiku HK;
void dataDisplay(HK *ptr_s);

int main(void)
{
   HK poem[2]={
    {2002,2022,"Clement","I am not creative enough","do I even have a poem","fuck naahh"},
    {2012,2023,"Zener","Prolly I am creative now","I've got crazy poems","fuck yeah"}
   };

   int i;
   for (i=0;i<2;i++)
    dataDisplay(&poem[i]);

    return 0;
}
void dataDisplay(HK *ptr_s)
{
    printf("%s\n",ptr_s -> str1);
    printf("%s\n",ptr_s -> str2);
    printf("%s\n",ptr_s -> str3);
    printf(".... Author : %s\n",ptr_s -> author);
    printf(".... (%d - %d) \n",ptr_s -> year_start,ptr_s -> year_end);
}