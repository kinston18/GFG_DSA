/*

Input: matrix = {{0,1,43},{1,0,6},{-1,-1,0}}

Output: {{0,1,7},{1,0,6},{-1,-1,0}}

*/

//User function template for C++

class Solution {
  public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int n=matrix.size();
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]==-1)
	            matrix[i][j]=INT_MAX;
	        }
	    }
	    
	    for(int k=0;k<n;k++)
	    {
	        for(int i=0;i<n;i++ )
	        {
	            
	                for(int j=0;j<n;j++)
	                {
	                    
	                     if(matrix[i][k]!=INT_MAX and matrix[k][j]!=INT_MAX)
	                        matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	                    
	                    
	                }
	            
	        }
	    }
	    
	     for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(matrix[i][j]==INT_MAX)
	            matrix[i][j]=-1;
	        }
	    }
	}
};
