#include <iostream>
#include <vector>

/* A template function. It is a function that can take any type of data. */
// Usually we define it in the header file .hpp
template <typename T>
T get_smallest(T num1, T num2) {
  
  return num2 < num1? num2 : num1;
}


int main(void)
{
  std::cout << get_smallest(10,18) << "\n";
}


