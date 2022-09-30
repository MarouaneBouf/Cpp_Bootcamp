#include <iostream>
#include <vector>

int main(void)
{

  /* Creating a vector of integers and initializing it with the values 1, 5, 9, and 10. */
  std::vector<int> array_numb = {1,5,9,10};
  
  /* Adding 11 to the end of the array and then removing it. */
  array_numb.push_back(11);
  array_numb.pop_back();

  /* This is a for loop that iterates through the vector and prints out the value at each index. */
  for (int i = 0; i < array_numb.size(); i++)
  {
    std::cout << "Element at index " << i << " is "<< array_numb[i] << "\n";
  }

  return 0;
}