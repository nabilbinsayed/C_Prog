// Name:
// Date:
// Course/book:
// Section:
// Purpose:

//   Calculating a Broker’s Commission
// When stocks are sold or purchased through a broker, the broker’s commission is
// often computed using a sliding scale that depends upon the value of the stocks
// traded. Let’s say that a broker charges the amounts shown in the following table:
// Transaction size Commission rate
// Under $2,500 $30 + 1.7%
// $2,500–$6,250 $56 + 0.66%
// $6,250–$20,000 $76 + 0.34%
// $20,000–$50,000 $100 + 0.22%
// $50,000–$500,000 $155 + 0.11%
// Over $500,000 $255 + 0.09%
// The minimum charge is $39. Our next program asks the user to enter the amount of
// the trade, then displays the amount of the commission:
// Enter value of trade: 30000
// Commission: $166.00
// The heart of the program is a cascaded if statement that determines which range
// the trade falls into.

// Note/Highlight:

#include <stdio.h>

int main(void)
{
    float value, comm;

    printf("Enter value of trade: ");
    scanf("%f", &value);

    if (value < 2500)
    {
        comm = 30 + 0.017 * value;
    }
    else if (value < 6250)
    {
        comm = 56 + 0.0066 * value;
    }
    else if (value < 20000)
    {
        comm = 76 + 0.0034 * value;
    }
    else if (value < 50000)
    {
        comm = 100 + 0.0022 * value;
    }
    else if (value < 500000)
    {
        comm = 155 + 0.0011 * value;
    }
    else
    {
        comm = 255 + 0.0009 * value;
    }

    if (comm < 39)
    {
        comm = 39;
    }

    printf("Commission: %.4f\n", comm);

    return 0;
}
