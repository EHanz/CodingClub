#include <iostream>
#include <algorithm>
#include <vector>

/*
* Program uses manhattan distance to find the longest travel time
* for a spy to a safe house.
*/

int main ()
{
    int n;
    char fill;
    int high_val;

    std :: cin >> n;
    char grid [n][n];

    std::vector<std::tuple <int, int>>  tuples;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std :: cin >> fill;
            grid [i][j] = fill;
        }
    }

    /*
    * Block a Safe House is on is denoted with H
    * Block a Spy is on is denoted with S
    * Regular block denoted with .
    */

   for (int i = 0; i < n; i++)
   {

   }

}