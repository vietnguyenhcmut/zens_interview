#include <algorithm> // Sort the vector
#include <iostream>  // I use it for I/O
#include <vector>    // Store 5 integer numbers and use sort() method

using namespace std;

/* the output may store a number which greater than a 32 bit integer, so I use
 * the "long long int" type for output and "long int" type for input */

void miniMaxSum(vector<long int> v)
{
  // Now sort the arr vector from smallest to largest
  sort(v.begin(), v.end());
  /* BONUS: Find min and max in array
  After sort() method is invoked, arr[0] will be the smallest element, and
  arr[arr.size() - 1] will be the largest one.
  */

  /*.
  Now, the minSum is calculated by adding all of the elements of arr vector,
  except the last element (5th element or arr[5]) */
  long long int minSum = v[0] + v[1] + v[2] + v[3];
  /* Of course that the maxSum will be calculated by adding all of the elements
   * of arr vector, except the first element (1st element or arr[0]) */
  long long int maxSum = v[1] + v[2] + v[3] + v[4];

  // Finally just showing the output of this test
  cout << minSum << " " << maxSum;
}

int main()
{
  cout << "Please enter 5 integer elements: ";
  vector<long int> arr;

  // User enters 5 integer numbers and push them into the arr vector, redundant
  // elements will be removed
  for (int i = 0; i < 5; i++)
  {
    long int num;
    cin >> num;
    arr.push_back(num);
    /* BONUS: Count total of array
    I can count total of array by declaring a variable "total" outside the loop,
    then adding "num" to "total" whenever the loop is repeated: total += num;
    */

    /* BONUS: Find even elements in array
    I can identify an element if it is even by dividing it by 2 and checking if
    the remainder is 0: if (num % 2 == 0) {...} And else {...} is odd numbers
    handling
    */
  }

  // Invoke miniMaxSum() function
  miniMaxSum(arr);

  return 0;
}