/*Program that calculates the ramaining balance after first, second, third payment */
#include <stdio.h>


int main(void)
{
    // declare loan
    float loan, interest, payment;
    printf("Enter amount of loan:");
    scanf("%f", &loan);
    
    // delcare interest rate
    printf("Enter interest rate:");
    scanf("%f", &interest);
 
    // declare amount of payment each month
    printf("Enter monthly payment:");
    scanf("%f", &payment);

    // turn interest value into decimal
    interest = interest / 100;
    float interest_decimal = interest / 12;

    // calculate remaining balance after first month
    float balance_post_interest = loan * (1 + interest_decimal);
    float balance_post_1st_payment = balance_post_interest  - payment;

    printf("Balance remaining after first payment:$%.2f\n",balance_post_1st_payment);

    // calculate remaining balance after second month
    balance_post_interest = balance_post_1st_payment * (1 + interest_decimal);
    float balance_post_2nd_payment = balance_post_interest - payment;

    printf("Balance remaining after second payment:$%.2f\n",balance_post_2nd_payment);

    // calculate remaining balance after third month
    balance_post_interest = balance_post_2nd_payment * (1 + interest_decimal);
    float balance_post_3rd_payment = balance_post_interest - payment;

    printf("Balance remaining after third payment:$%.2f\n",balance_post_3rd_payment);

    return 0;
}
