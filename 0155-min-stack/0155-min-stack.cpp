class MinStack {
public:
    vector<int> ans;
    vector<int> minAns;
    MinStack() {
        ans.clear();
        
    }
    
    void push(int value) {
        ans.push_back(value);
        if(minAns.empty()){
            minAns.push_back(value);
        }
        else{
            minAns.push_back(min(value,minAns.back()));
        }
        
    }
    
    void pop() {
        ans.pop_back();
        minAns.pop_back();
        
    }
    
    int top() {
        return ans.back();
        
    }
    
    int getMin() {
        return minAns.back();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */