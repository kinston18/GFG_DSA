

// Your code here
        int i;
        for(i=0;i<n;i++){
            if(v[i] == x){
                return i;
            }else if(v[i] > x){
                return i-1;
            }
        }
        return n-1;
