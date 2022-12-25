#include <stdio.h>

/*
* @D -Access to structure members 
*/
int main(void)
{
    struct computer{
        float cost;
        int year;
        int cpu_speed;
        char cpu_type[16];
    } model;

    printf("the type of cpu inside your machine : \n");
    gets(model.cpu_type);
    printf("The speed of your cpu : \n");
    scanf("%d",&model.cpu_speed);
    printf("What's the year of your machine : \n");
    scanf("%d",&model.year);
    printf("How much does your computer cost : \n");
    scanf("%f",&model.cost);

    printf("computer type : %s\n",model.cpu_type);
    printf("compuer speed : %d GHZ\n",model.cpu_speed);
    printf("compuer year : %d\n",model.year);
    printf("compuer cost : %.2f Cedis\n",model.cost);
}