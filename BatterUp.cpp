#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    float slug = 0.0;
    float n = 0;
    std :: cin >> n;

    int hit = 0;

    while (n--)
    {
        float temp;
        std :: cin >> temp;
        if (temp >= 0)
        {
            hit++;
            slug += temp;
        }
    }

    slug = slug / hit;

    std :: cout << fixed;
    std :: cout.precision (9);

    std :: cout << slug << std :: endl;
}