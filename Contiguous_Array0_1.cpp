class Solution {
public:
    
    int findMaxLength(vector<int>& nums) {
         map<int, int> map1;
        map1.insert(make_pair(0, -1));
        int maxlen = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            count = count + (nums[i] == 1 ? 1 : -1);
            if (map1.find(count)!=map1.end()) {
                maxlen = max(maxlen, i - map1[count]);
            } else {
                map1.insert(make_pair(count, i));
            }
        }
        return maxlen;
    }
};
