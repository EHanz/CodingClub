#include <iostream>
#include <vector>

int main ()
{
  int ingredients = 0;
  int recipes = 0;
  
  std :: cin >> ingredients;
  std :: cin >> recipes;

  std :: vector <int> ing;
  
  for (int i = 0; i < ingredients; ++i)
    {
      int temp;
      std :: cin >> temp;
      ing.push_back (temp);
    }

  for (int j = 0; j < recipes; ++j)
    {
      for (int k = 0; k < ingredients; k++)
	{
	  int temp;
	  std :: cin >> temp;
	  if (temp < ing.at (k))
	    {
	      
	    }
	}
    }
}

