#include <iostream>
#include <string>

bool isPalindrome(std::string s) {
  int n = s.size();
  int left = 0;
  int right = n - 1;
  while (left < right)
  {
    while (left < right && !std::isalnum(s[left]))
    {
      left++;
    }
    while (left < right && !std::isalnum(s[right]))
    {
      right--;
    }
    if (tolower(s[left]) != std::tolower(s[right]))
    {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main(){
  
}