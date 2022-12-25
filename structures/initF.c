#include <stdio.h>

/*
* @d - Initializing a structure
*/
int main()
{
    struct employee{
        int id;
        char name[32];
    };
    /* Structure initialization*/
    struct employee info = {
        1,
        "Clement Bogyah"
    };
    printf("For reference\n");
    printf("Employee id = %d\n",info.id);
    printf("Employee name = %s\n",info.name);

    printf("________\n");
    printf("Your name ?\n");
    gets(info.name);
    printf("Your id ?\n");
    scanf("%d",&info.id);

    printf("----------\n");
    printf("Details\n");
    printf("Employee name : %s\n",info.name);
    printf("Employee id : %d\n",info.id);
    return 0;
}