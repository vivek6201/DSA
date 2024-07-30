#include <bits/stdc++.h>
 
using namespace std;
  
// function to find the first negative 
// integer in every window of size k
void printFirstNegativeInteger(int arr[], int n, int k)
{
    // A Double Ended Queue, dq that will store indexes of 
    // useful array elements for the current window of size k.
    // The useful elements are all negative integers.
    deque<int>  dq;
  
    /* Process first k (or first window) elements of array */
    int i;
    for (i = 0; i < k; i++)
        // Add current element at the rear of dq
        // if it is a negative integer
        if (arr[i] < 0)
            dq.push_back(i);
     
    // Process rest of the elements, i.e., from arr[k] to arr[n-1]
    for ( ; i < n; i++)
    {
        // if dq is not empty then the element at the
        // front of the queue is the first negative integer
        // of the previous window
        if (!dq.empty())
            cout << arr[dq.front()] << " ";
         
        // else the window does not have a
        // negative integer
        else
            cout << "0" << " ";
  
        // Remove the elements which are out of this window
        while ( (!dq.empty()) && dq.front() < (i - k + 1))
            dq.pop_front();  // Remove from front of queue
  
        // Add current element at the rear of dq
        // if it is a negative integer
        if (arr[i] < 0)
            dq.push_back(i);
    }
  
    // Print the first negative 
    // integer of last window
    if (!dq.empty())
           cout << arr[dq.front()] << " ";
    else
        cout << "0" << " ";       
     
}
  
// Driver program to test above functions
int main()
{
    int arr[] = {-2,0-1,2,-4};
    int n = 5;
    int k = 3;
    printFirstNegativeInteger(arr, n, k);
    return 0;
}