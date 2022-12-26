#include <stdio.h>

int main(void)
{
    struct Emp
    {
        int eno;
        char ename[20];
        float esal;
    };

    struct Emp e = {1000,"zener",500000};
    printf("Size of Emp : %d\n",sizeof(e));
    printf("Size of Emp : %d\n",sizeof(struct Emp));

    printf("Emp eno : %d\n",e.eno);
    
    return 0;
}