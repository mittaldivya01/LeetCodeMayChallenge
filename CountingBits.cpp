class Solution {
public:
vector countBits(int num) {
int itr=0;
vector res;

    res.push_back(0);
    for(int i=1;i<=num; ++i, ++itr)
    {
        //initialize itr=0 if i is power of 2
        if((i & (i-1) )==0)
            itr=0;
        //using binary number bit pattern to count number of 1's
        res.push_back(res[itr]+1);
        
    }
    return res;
}

};
