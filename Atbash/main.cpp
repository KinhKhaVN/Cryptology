#include <future>
#include <iostream>
#include <map>
#include <sstream>
#include <stdio.h>


const int startChar = 97;
const int endChar = 122;

void Init(std::map<char, char> &mp);
void loadText(std::string &plaintext);

std::string Cipher(std::string plaintext, std::map<char, char> mp);


int main () 
{
  std::map<char, char> mp;
  std::string plaintext;

  Init(mp);
  loadText(plaintext);

  std::string ciphertext = Cipher(plaintext, mp); 

  std::cout << ciphertext << '\n';

  return 0;
}

void Init(std::map<char, char> &mp)
{
  for (int i = 0; i <= 25; i++)
    mp.insert(std::make_pair(static_cast<char>(startChar + i), static_cast<char>(endChar - i)));

  for (auto p : mp)
    std::cout << p.first << " " << p.second << '\n';
}


void loadText(std::string &plaintext)
{
  std::cout << "Plain text: ";
  std::getline(std::cin, plaintext);
}

std::string Cipher(std::string plaintext, std::map<char, char> mp)
{

  std::string ciphertext;
  ciphertext.resize(plaintext.size());

  for (int i = 0; i < plaintext.size(); i++)
    if (plaintext[i] == ' '){
      ciphertext[i] = ' ';
      continue;
    }
    else ciphertext[i] = mp[plaintext[i]];

  return ciphertext;
}
