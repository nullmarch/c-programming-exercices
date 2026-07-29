// paying using smallest amount bills $20, $10, $5, $1
#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a U.S. dollar amount:");
    scanf("%d", &x);
    
    // variables represent bills
    
    int num_20 = x / 20;
    printf("\n$20 bills: %d\n", num_20);

    x = x - (20 * num_20);
    int num_10 = x / 10;
    printf("\n$10 bills: %d\n", num_10);

    x = x - (10 * num_10);
    int num_5 = x / 5;
    printf("\n$5 bills: %d\n", num_5);

    x = x - (5 * num_5);
    int num_1 = x / 1;
    printf("\n$1 bills: %d\n", num_1);


    return 0;




}
