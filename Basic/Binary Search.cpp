class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int s=0;
        int e=n-1;
        int mid;
        
        while(s<=e){
            mid = (s+e)/2;
            
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
            else
            e=mid-1;
        }
        return -1;
    }
};
