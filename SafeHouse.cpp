#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*
* Program uses manhattan distance to find the longest travel time
* for a spy to a safe house.
*/

int d (pair <int, int> s, pair<int, int> h);

int main ()
{
  int n = 0;
  std :: cin >> n;
  
  std :: vector <pair <int, int>> spy;
  std :: vector <pair <int, int>> house;

  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  char temp;
	  std :: cin >> temp;
	  // takes user input and assigns the S and H values into separate grids
	  if (temp == 'S')
	    {
	      spy.push_back ({i, j});
	    }
	  else if (temp == 'H')
	    {
	      house.push_back ({i, j});
	    }
	}
    }

  int result = 0;
  for (int i = 0; i <spy.size (); i++)
    {
      int lim = 100000;
      for (int j = 0; j < house.size (); j++)
	{
	  //lim equals the lesser of the min values
	  lim = min (lim, d(spy[i],house[j]));
	}
      result = max (result, lim);
    }

  std :: cout << result << std :: endl;
}

int
d (pair <int, int> s, pair <int, int> h)
{
  int r = abs (s.first - h.first) + abs (s.second - h.second);
  return r;
}
