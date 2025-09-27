class MinStack {
public:
    MinStack(){
        
    }
    
    void push(int val) {
        st.push(val);
        if (min.empty())
            min.push(val);
        else if (min.top() > val)
            min.push(val);
        else
            min.push(min.top());
    }
    
    void pop() {
        st.pop();
        min.pop();
    }
    
    int top() {
        return (st.top());
    }
    
    int getMin() 
    {
        return (min.top());
    }
    stack<int> min;
    stack<int> st;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */