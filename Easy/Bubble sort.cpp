/*

Input: 
N = 5
arr[] = {4, 1, 3, 9, 7}
Output: 
1 3 4 7 9
  */


//User function Template for C++

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    swap(&arr[i],&arr[j]);
                }
            }
 }   }
};
