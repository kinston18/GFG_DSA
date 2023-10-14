/*

Example 1:

Input:
N = 8
Arr = {4, 2, 4, 5, 2, 3, 3, 1}
Output: {5, 1} 
Explaination: 5 and 1 have odd occurrences.

  */

//User function Template for C++
class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int> ans(2);
         
         int x=0,res=0,res1=0;
         
         for(int i=0;i<N;i++) //calculate xors .
            x^=Arr[i];
            
         int rgt=x & ~(x-1);  //for getting the rightmost set bit of
                               //the resultant xor 
         
         for(int i=0;i<N;i++){
             
             if((Arr[i]&rgt)!=0)  // 1st list of numbers .
                res=res^Arr[i];
             else
                res1=res1^ Arr[i]; //2nd list of numbers.
         } 
         //put 2 nos according to their positions.
         if(res>res1)
         ans[0]=res,ans[1]=res1;
         else
            ans[0]=res1,ans[1]=res;
            
            return ans;
    }
};
