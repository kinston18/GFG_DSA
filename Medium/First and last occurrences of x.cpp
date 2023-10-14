/*


Example 1:

Input:
n=9, x=5
arr[] = { 1, 3, 5, 5, 5, 5, 67, 123, 125 }
Output:  
2 5
Explanation: 
First occurrence of 5 is at index 2 and last occurrence of 5 is at index 5. 
  */

vector<int> find(int arr[], int n , int k )
{
    vector<int> v;
     int s =0;
     int  e = n-1;
 int mid = s + (e-s)/2;
     int ans = -1;
     // First Occurance
    while(s<=e){
        if(arr[mid] == k){
          ans = mid;
          e = mid -1;
      }
       if(arr[mid] > k){
           e = mid - 1;
       } 
       if(arr[mid] < k){
           s = mid + 1;
       }
        mid = s + (e-s)/2;
}
    v.push_back(ans);
    // last occurence
     s =0;
     e = n-1;
     mid = s + (e-s)/2;
     ans = -1;
     while(s<=e){
        if(arr[mid] == k){
          ans = mid;
          s = mid+1;
      }
       if(arr[mid] > k){
           e = mid - 1;
       } 
       if(arr[mid] < k){
           s = mid + 1;
       }
        mid = s + (e-s)/2;
    }
    v.push_back(ans);
    return v;
}
