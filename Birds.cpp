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
    int bird_location = 0;

    std :: vector <int> bird_presets (n + 2);


    // Gather user input
    // wire length - l
    std :: cin >> wire_length; 

    // bird distance - d
    std :: cin >> bird_distance;

    // bird number n
    std :: cin >> n;

    bird_presets [0] = 6 - bird_distance;

    std :: copy_n(std :: istream_iterator<int> {std :: cin}, n, bird_presets.begin () + 1);

    std :: sort (bird_presets.begin (), bird_presets.end ());

    // i represents index in birds presets
    int i = 0;

    // Starting position 6 cm from pole
    bird_location += 6;

    while (bird_location < wire_length - 6)
    {
        if (bird_location + bird_distance < bird_presets.at (i))
        {
            bird_location += bird_distance;
            bird_total++;
            std :: cout << "Bird up!" << std :: endl;
        }
        else
        {
            bird_location = bird_presets.at (i) + bird_distance;
            i++;
        }

        if (i == bird_presets.size ())
        {
            break;
        }
    }

    std :: cout << bird_total << std :: endl;
}