#include <iostream>
#include <algorithm>

int main ()
{
    int l, d, n;
    int bird_counter;
    std :: cin >> l >> d >> n;

    int bird_array [n];

    if (l <= 12)
    {
        std :: cout << bird_counter;
    }
    else
    {
        if (n == 0)
        {
            int dist_use = l - 12;
            bird_counter += ((dist_use / d) + 1);
        }
        else
        {
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                std :: cin >> temp;
                bird_array[i] = temp;
            }

            int arr_l = sizeof (bird_array) / sizeof (bird_array[0]);

            std :: sort (bird_array, bird_array + arr_l);

            int left = bird_array[0] - 6;
            int right = (l - 6) - bird_array[arr_l - 1];
            
            bird_counter += ((left / d) + (right / d));

            for (int i = 0; i < n - 1; i++)
            {
                int dist_btwn = bird_array[i + 1] - bird_array [i];
                bird_counter += ((dist_btwn / d) - 1);
            }
        }
        
        std :: cout << bird_counter;
    }
}