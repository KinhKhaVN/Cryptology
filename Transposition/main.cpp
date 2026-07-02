#include <cstdio>
#include <cstring>
#include <iostream>
#include <utility>


void Transposition(char* text)
{
  int left = 0;
  int right = strlen(text) - 1;

  while (left < right)
  {
    std::swap(text[left], text[right]);
    left++;
    right--;
  }
}


int main () {

  char text[50] = "FLANK EAST ATTACK AT DAWN";

  std::printf("Plaintext: %s\n", text);

  Transposition(text);

  std::printf("Ciphertext: %s\n", text);

  Transposition(text);

  std::printf("Easy to detransposition: %s\n", text);

  return 0;
}
