
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    int low =0 , high = n-1;
    int mid = (low+high)/2;
    
    int f = -1;
    int c=-1;
    
    sort(arr,arr+n);
    while(low<=high){
        if(arr[mid]==x){
            f=arr[mid];
            c=arr[mid];
            break;
        }
        if(arr[mid]<x){
            f=arr[mid];
            low = mid+1;
        }
        if(arr[mid]>x){
            c=arr[mid];
            high = mid-1;
        }
        mid = (low+high)/2;
    }
    return {f,c};
    
}
