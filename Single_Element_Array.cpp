class Solution {
public:
int singleNonDuplicate(vector& nums) {

    int res=0;
    for(int i=0;i<nums.size();i++)
    {
        res= res^nums[i];
    }
    return res;
}

};
