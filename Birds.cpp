/*
* Program that determines the amount of birds that can fit on a single pole
* Each bird must be spaced by length d, on an l length pole, with n number of birds
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main ()
{
    int wire_length = 0;
    int bird_total = 0;
    int bird_distance = 0;
    int n = 0;
    int current_location = 0;

    // Gather user input
    // wire length - l
    std :: cin >> wire_length; 

    // bird distance - d
    std :: cin >> bird_distance;

    // bird number n
    std :: cin >> n;

    std :: vector <int> birds_given (n + 2);

    birds_given [0] = 6 - bird_distance;

    std :: copy_n(std :: istream_iterator<int> {std :: cin}, n, birds_given.begin () + 1);

    std :: sort (birds_given.begin (), birds_given.end ());

    if (wire_length <= 12)
    {
        bird_total = 0;
        std :: cout << bird_total << std :: endl;
    }
    else 
    {
        if (n == 0)
        {
            int distance_temp = wire_length - 12;
            bird_total += (distance_temp / bird_distance) + 1;
        }
        else
        {
            int left_wire_dist = birds_given[0] - 6;
            int right_wire_dist = (wire_length - 6) - birds_given[birds_given.size () - 1];

            bird_total += (left_wire_dist / bird_distance) + (right_wire_dist / bird_distance);

            for (int i = 0; i < n - 1; i++)
            {
                int dist_btwn_birds = birds_given[i + 1] - birds_given[i];
                bird_total += (dist_btwn_birds / bird_distance) - 1;
            }
        }
        std :: cout << bird_total << std :: endl;
    }

}