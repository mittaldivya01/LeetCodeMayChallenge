class Solution {
public:

int maxUncrossedLines(vector<int>& A, vector<int>& B) {
    int la=A.size();
    int lb=B.size();
    int dp[la+1][lb+1];
    for(int i=0;i<la+1;i++) dp[i][0]=0; 
    for(int j=0;j<lb+1;++j) dp[0][j]=0;
       
    for(int i=1;i<la+1;i++)
    {
       for(int j=1;j<lb+1;j++)
        {
            if(A[i-1]==B[j-1])  dp[i][j]= 1+ dp[i-1][j-1];
            else p[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[la][lb];   
}

};
