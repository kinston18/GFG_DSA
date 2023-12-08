/*

  Given an array of n integers. Find the minimum non-negative number to be inserted in array, so that sum of all elements of array becomes prime.

  Input:
N=3
arr = {1, 5, 7}
Output:  
0 
Explanation: 
The sum of the array is 13 which is already prime. 

  */



class Solution
{
    bool prime(int p){
        if(p<2)
        return false;
        
        else
        for(int i=2;i<=sqrt(p);i++){
            if(p%i==0){
                return false;
            }
        }
        return true;
    }
    public:
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i=0;i<N;i++){
            sum = sum + arr[i];
        }
        int i=0;
        while(!prime(sum+i)){
            i++;
        }
        return i;
        }
};
