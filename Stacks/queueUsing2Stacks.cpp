class MyQueue {
    stack<int>s;
    stack<int>s1;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s.empty()){
            s1.push(s.top());
            s.pop();
        }
        s.push(x);
         while(!s1.empty()){
            s.push(s1.top());
            s1.pop();
        }
    }
    
    int pop() {
        int ans = s.top();
        s.pop();
        
        return ans;
    }
    
    int peek() {
        return s.top();
        
    }
    
    bool empty() {
        return s.empty();
    }
};
