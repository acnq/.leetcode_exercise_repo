/**
 * @Given an array of integers, the task is to remove an element from the array to make the array sorted (either ascending or descending).
  1.	If the array is sorted already, return the smallest element of the array
  2.	If the array is not sorted, 
    a)	If removing one of its elements makes it sorted, return this element; if multiple solutions exist, return the smallest element of the solutions
    b)	If no any solutions, return -1

  Input:
  1st line: an integer between 2 and 200 (2 and 200 are included) which is the length of an array 
  2nd line: all elements of the array, each element is in the range of [0.200] 

  Output:
  An integer returned
  1,3,
  Example1:
  Input: 3 [1 3 5], Output: 1
  Example2:
  Input: 3 [2 1 4], Output: 1
  Example2:
  Input: 3 [1,3,2], Output: 1
  Example3:
  Input: 5 [2 3 1 5 4], Output: -1
 */
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int removeSorted(vector<int> nums){
  // assume the array is written with ascending order
  int n = nums.size();
  vector<int> breaker;
  for (int i = 0; i < n - 1; i++)
  {
    if (nums[i] > nums[i + 1])
    {
      // a[i-1] < (a[i] > a[i+1]) < a[i+2] 
      if (i-1 >= 0 && i + 2 < n)
      {
        if (nums[i-1] < nums[i + 1] && nums[i + 1] < nums[i + 2])
        {
          breaker.push_back(nums[i + 1]);
        }
      } else if (i - 1 < 0 || i + 2 > n || i + 1 > n)
      {
        breaker.push_back(nums[i + 1]);
      } else
      {
        breaker.push_back(nums[i]);
      }
      
    }
  }
  // test breakser.content
  for (int i = 0; i < breaker.size(); i++)
  {
    cout<<breaker[i];
  }
  cout<< "test breaker end" << endl;
  
  if (breaker.size() >= 2)
  {
    return -1;
  } else if (breaker.size() == 1)
  {
    return breaker[0];
  } else
  {
    return 1;
  }
}

// functionality test
int main(){
  // case 1
  vector<int> arr1;
  arr1.push_back(1);
  arr1.push_back(3);
  arr1.push_back(5);
  int ans1 = removeSorted(arr1);

  vector<int> arr2;
  arr2.push_back(2);
  arr2.push_back(1);
  arr2.push_back(4);
  int ans2 = removeSorted(arr2);

  vector<int> arr3;
  arr3.push_back(1);
  arr3.push_back(3);
  arr3.push_back(2);
  int ans3 = removeSorted(arr3);

  vector<int> arr4;
  arr4.push_back(2);
  arr4.push_back(3);
  arr4.push_back(1);
  arr4.push_back(5);
  arr4.push_back(4);
  int ans4 = removeSorted(arr4);

  cout << "ans1: " << ans1 << "ans2: " << ans2 << "ans3: " << ans3 << "ans4: " << ans4 << endl;

}