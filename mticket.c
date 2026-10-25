#include <stdio.h>

int main(void)
{
    int adcount = 0;
    int chcount = 0;
    int tperson = 0;
    float adcost = 0.0f;
    float chcost = 0.0f;
    float grtotal = 0.0f;
    float disamt = 0.0f;
    float newbill = 0.0f;

    printf("Welcome to movie ticket booking portal\n");
    printf("The individuals below 18 years of age will be considered as child\n");
    printf("The cost of ticket for adults is 200rs and child is 100rs\n\n");

    printf("Please enter the number of adults for ticket booking\n");
    scanf("%d", &adcount);

    printf("Please enter the number of children for ticket booking\n");
    scanf("%d", &chcount);

    adcost = adcount * 200.0f;
    chcost = chcount * 100.0f;
    grtotal = adcost + chcost;
    tperson = adcount + chcount;

    printf("The total number of people to be booked for movie are %d\n", tperson);
    printf("Your gross bill for ticket booking is %.2frs + %.2frs = %.2frs\n", adcost, chcost, grtotal);
    printf("A discount amount of 10 percent on each ticket will be applicable if your gross bill amount exceeds 500rs\n\n");

    if (grtotal > 500)
    {
        disamt = (adcost * 10.0f / 100.0f) + (chcost * 10.0f / 100.0f);
        newbill = grtotal - disamt;
        printf("You are applicable for discount and a particular amount will be deducted from your gross total\n");
        printf("The discount is applied to your bill and the final amount to be paid is %.2frs - %.2frs = %.2frs\n", grtotal, disamt, newbill);
    }
    else
    {
        printf("We have checked your gross total as it does not exceed 500rs so no discount will be applicable to your final bill\n");
        printf("The final amount to be paid is %.2frs\n", grtotal);
    }

    printf("Thanks for carrying out the process of movie ticket booking via our portal\n");
    printf("Hope so you will enjoy watching the movie!!!\n");

    return 0;
}
