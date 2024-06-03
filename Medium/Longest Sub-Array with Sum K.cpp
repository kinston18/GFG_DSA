class Solution{
    public:
    
    // Better using Hashmap
    int lenOfLongSubarr(int A[],  int N, int K){
        
        map<long long int, int> prevSum;
        
        int maxLen = 0;
        long long sum = 0;
        
        for(int i=0; i<N; i++){
            
            sum += A[i];
            
            if(sum == K){
                maxLen = max(maxLen, i+1);
            }
            
            long long rem = sum - K;
            
            if(prevSum.find(rem) != prevSum.end()){
                
                int len = i - prevSum[rem];
                maxLen = max(maxLen, len);
                
            }
            
            if(prevSum.find(sum) == prevSum.end())
              prevSum[sum] = i;
            
        }
        
        return maxLen;
    } 

};
