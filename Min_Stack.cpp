class MinStack {
    stack<int>st;
    stack<int>min_ele;
     
public:
    MinStack() {
        
    }
    void push(int val) {
      
     if(min_ele.empty() || val<=min_ele.top())
     {
               min_ele.push(val);
               st.push(val);
     }
     else st.push(val);
           
   } 
    
    void pop() {
        if(st.top()==min_ele.top()){
            st.pop();
            min_ele.pop();
        }    
        else
            st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return min_ele.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
