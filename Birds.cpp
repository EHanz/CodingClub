/*
* Program that determines the amount of birds that can fit on a single pole
* Each bird must be spaced by length d, on an l length pole, with n number of birds
*/

#include <iostream>
#include <vector>

int main ()
{
    int wire_length = 0;
    int bird_total = 0;
    int bird_distance = 0;
    int n = 0;
    int bird_location = 0;

    std :: vector <int> bird_presets;


    // Gather user input

    // wire length - l
    std :: cin >> wire_length; 

    // bird distance - d
    std :: cin >> bird_distance;

    // bird number n
    std :: cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        std :: cin >> temp;
        bird_total++;
        bird_presets.push_back (temp);
    }

    // i represents index in birds presets
    int i = 0;

    // Starting position 6 cm from pole
    bird_location += 6;
    while (bird_location <= wire_length - 6)
    {
        if (bird_location + bird_distance < bird_presets.at (i))
        {
            bird_location += bird_distance;
            bird_total++;
        }
        else
        {
            bird_location = bird_presets.at (i) + bird_distance;
            i++;
        }
    }
}