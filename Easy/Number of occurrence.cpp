/*
Input:
N = 7, X = 2
Arr[] = {1, 1, 2, 2, 2, 2, 3}
Output: 4
Explanation: 2 occurs 4 times in the
given array.


*/

//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start = 0;
	    int end = n-1;
	    int mid  = start + (end-start)/2;
	    int res = -1;
	    while(start<=end){
	        if(x == arr[mid]){
	            res = mid;
	            end = mid-1;
	        }
	        else
	        if(x<arr[mid])
	            end = mid-1;
	        else
	        if(x>arr[mid])
	            start = mid+1;
	            
	       mid = start + (end-start)/2;
	    }
	    int num1 = res;
	    
	   start = 0;
	   end = n-1;
	   //res = -1;
	   mid  = start + (end-start)/2;
	    while(start<=end){
	        if(x == arr[mid]){
	            res = mid;
	            start = mid+1;
	        }
	        else
	        if(x<arr[mid])
	            end = mid-1;
	        else
	        if(x>arr[mid])
	            start = mid+1;
	            
	       mid = start + (end-start)/2;
	    }
	    int num2 = res;
	    int ans = 0;
	    if(num1!=-1 & num2!=-1){
	        ans = num2 - num1 + 1;
	        return ans;
	    }
	    return ans;
	}
};
