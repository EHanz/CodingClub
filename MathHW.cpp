#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int a, b, c;
    int leg_total = 0;
    int tally = 0;

    std :: cin >> a >> b >> c >> leg_total;
    
    for (int i = 0; i <= leg_total / a; i++)
    {
        for (int j = 0; j <= leg_total / b; j++)
        {
            for (int k = 0; k <= leg_total / c; k++)
            {
                if ((i * a) + (j * b) + (k * c) == leg_total)
                {
                    std :: cout << i << " " << j << " " << k << std :: endl;
                    tally++;
                }
            }
        }
    }

    if (tally == 0)
    {
        std :: cout << "impossible" << std :: endl;
    }
}