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
            /*
            * Runs this segment if no extra birds are given for the wire
            * Since there is no extra calculation you just go across the wire
            * Evenly placing birds
            */
            int dist_use = l - 12;
            bird_counter += ((dist_use / d) + 1);
        }
        else
        {
            // Fill the array of given birds
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                std :: cin >> temp;
                bird_array[i] = temp;
            }

            // integer for determining boundaries of the sort
            int arr_l = sizeof (bird_array) / sizeof (bird_array[0]);

            std :: sort (bird_array, bird_array + arr_l);

            /*
            * Creates left boundary and right boundary for bird placement
            * After left and right are determined the bird counter is incremented
            */
            int left = bird_array[0] - 6;
            int right = (l - 6) - bird_array[arr_l - 1];
            
            bird_counter += ((left / d) + (right / d));

            /*
            * Increments bird count by determining the distance between birds
            * Then places birds until the limit is reached
            * Process repeats until the end of the wire
            */
            for (int i = 0; i < n - 1; i++)
            {
                int dist_btwn = bird_array[i + 1] - bird_array [i];
                bird_counter += ((dist_btwn / d) - 1);
            }
        }
        
        std :: cout << bird_counter;
    }
}