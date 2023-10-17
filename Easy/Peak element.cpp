/* The function should return the index of any
   peak element present in the array 
   
   Input: 
N = 3
arr[] = {1,2,3}
Possible Answer: 2
Generated Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0.
   */

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       // Your code here
       int s=0;
       int e=n-1;
       int mid = s+(e-s)/2;
       while(s<e){
           if(arr[mid]<arr[mid+1])
           s=mid+1;
           else
           e=mid;
           
           mid=s+(e-s)/2;
           }
           return s;
    }
};
