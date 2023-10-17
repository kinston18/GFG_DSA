/*
Input: N = 34
Output: "Yes" 
Explanation: 34 can be expressed as 
sum of two prime numbers.


  */

// User function Template for C++
class Solution {
public:
    string isSumOfTwo(int N){
         vector<int> v={1,2};

        for(int i=3;i<N;i++){

            int flag=1;

            for(int j=2;j*j<=i;j++){

                if(i%j==0){

                    flag=0;

                    break;

                }

            }

            if(flag==1){

                v.push_back(i);

            }

        }

        

       map<int,int>mp;

       for(int i=0;i<v.size();i++){

           int x= N-v[i];

           if(mp.find(x)!=mp.end()){

               return "Yes";

           }

           mp[v[i]]++;

       }

        return "No";


        
    }
};
