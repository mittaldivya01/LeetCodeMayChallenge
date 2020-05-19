class StockSpanner {
public:
    StockSpanner() {
       int next(int price) ;
    }
    stack<int> s1;
    vector<int> arr;
    int next(int price) {
        if(arr.empty()) {
            arr.push_back(price);
            s1.push(arr.size()-1);
            return 1;
        }
        arr.push_back(price);
        while(!s1.empty() && arr[s1.top()]<=price)
            s1.pop();
        
        int res= (s1.empty())?arr.size() : (arr.size()-1-s1.top());
        s1.push(arr.size()-1);
        return res;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
