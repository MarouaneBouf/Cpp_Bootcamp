#include <iostream>
#include <vector>

int main(void)
{
  std::string text;
  std::cout << "Enter a word to check? ";
  std::cin >> text;

  /* Creating a new string called rev and assigning it the value of text. */
  std::string rev = "";

  int size = text.size();

  /* Reversing the string. */
  for(int i = 0; i < size; i++)
  {
    // Pythonice kinda thing lol!!
    rev += text[size - i -1]; // or rev[i] = text[size - 1 -i] and you can initialize rev = text;
  }

  std::cout << rev << "\n";
  return 0;
}