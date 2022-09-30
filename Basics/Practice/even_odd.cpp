#include <iostream>
#include <vector>


int main(void)
{
  std::vector<int> array = {2, 4, 3, 6, 1, 9};
  int even = 0;
  int odd = 1;
  for (int i = 0; i < array.size(); i++)
  {
    if(array[i]%2 == 0)
    {
      even += array[i];
    }
    else
    {
      odd *= array[i];
    }
  }
  std::cout << "Sum of even numbers is "<< even <<"\n";
  std::cout << "Product of odd numbers is "<< odd <<"\n";
  return 0;
}