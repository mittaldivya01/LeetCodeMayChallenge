class Solution {
public:
vector<vector> intervalIntersection(vector<vector>& A, vector<vector>& B) {
    vector<vector> res;
    int sa=A.size();
    int sb=B.size();
    int i=0,j=0,lo,hi;
    while(i<sa,j<sb)
    {
        //get max lowwer and min higher interval pointer
        lo= max(B[j][0], A[i][0]);
        hi=min(A[i][1],B[j][1]);
        if(lo<hi)
            res.push_back({lo,hi});
        //update pointer of disjoint lists as if A's endpoint > B's endpoint and vice versa
        if(A[i][1]>B[j][1])
            i++;
        else
            j++;
    }
    return res;
}
};
