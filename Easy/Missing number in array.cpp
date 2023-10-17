// User function template for C++

/*

  Input:
N = 5
A[] = {1,2,3,5}
Output: 4

  */

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum2=(n*(n+1))/2;
       int sum=0;
       for(int i=0; i<array.size(); i++){
           sum+=array[i];
       }
    
       
       return sum2-sum;
    }
};
