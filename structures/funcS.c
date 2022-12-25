#include <stdio.h>

/*
*@d - Passing a structure to a function
*/
struct computer{
        float cost;
        int year;
        int cpu_speed;
        char cpu_type[16];
    };

/*create synonm*/
typedef struct computer SC;
/*function declaration*/
SC dataRecieve (SC s);
int main(void)
{
    SC model;
    model = dataRecieve(model);

    printf("computer type : %s\n",model.cpu_type);
    printf("compuer speed : %d GHZ\n",model.cpu_speed);
    printf("compuer year : %d\n",model.year);
    printf("compuer cost : %.2f Cedis\n",model.cost);

    return 0;
}
SC dataRecieve (SC s)
{
    printf("the type of cpu inside your machine : \n");
    gets(s.cpu_type);
    printf("The speed of your cpu : \n");
    scanf("%d",&s.cpu_speed);
    printf("What's the year of your machine : \n");
    scanf("%d",&s.year);
    printf("How much does your computer cost : \n");
    scanf("%f",&s.cost);

    return s;
}