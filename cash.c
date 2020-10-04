#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    float n1;

    do
    {

        n1 = get_float("Change owed: ");

    }

    while (n1 <= 0.00);

    int n = round(n1 * 100);

    int coin = 0;

    while (n > 0)

    {

        if (n >= 25)
        {

            n = n - 25;
            coin++;
        }
        else if (n >= 10)
        {

            n = n - 10;
            coin++;
        }
        else if (n >= 5)
        {

            n = n - 5;
            coin++;
        }
        else
        {

            n = n - 1;
            coin++;
        }
    }

    printf("%d\n", coin);

}
