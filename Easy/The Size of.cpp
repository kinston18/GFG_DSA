//User function Template for C++

// Function to find size of different data types
void dataTypes(int a, float b, double c, long long l, string d){
    a=b/c;
    c=b/a;
    b=c/a;
    l=b+l;
    
    cout<<sizeof(a)<<" "<<sizeof(c)<<" "<<sizeof(b)<<" "<<sizeof(l)<<endl;
    cout<<sizeof(d)<<" "<<sizeof(d[3])<<endl;

}
