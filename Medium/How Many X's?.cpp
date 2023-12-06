/*


  Given two integers L, R, and digit X. Find the number of occurrences of X in all the numbers in the range (L, R) excluding L and R.

Example 1:

Input:
L=10, R=19, X=1
Output:
9
Explanation:
There are 9 1s (11, 12, 13, 14, 15, 16, 17, 18) in the numbers in the range (10,19).


*/
class Solution {
  public:
    int countX(int L, int R, int X) {
        // code here
        int count =0;
        
        for(int i=L+1;i<R;i++){
            string s=to_string(i);
            count += std::count(s.begin(),s.end(),'0'+X);
        }
        
        return count;
    }
};
