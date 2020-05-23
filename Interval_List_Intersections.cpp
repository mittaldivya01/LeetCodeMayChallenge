class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
      vector<vector<int>> res;  
        int sa=A.size();
        int sb=B.size();
        for(int i=0;i<sa;++i)
        {
            for(int j=0;j<sb;++j){
                //break if A and B do not overlap 
                if(A[i][1]<B[j][0] && A[i][0]<B[j][0])
                    break;
                //continue if A dont overlap with B  
                if(B[j][0]<A[i][0] && B[j][1]<A[i][0] )
                    continue;
                //get max lowwer bound and min higher bound 
                res.push_back({max(B[j][0], A[i][0]),min(A[i][1],B[j][1])});                   
            }
       }
      return res;  
    }
};
