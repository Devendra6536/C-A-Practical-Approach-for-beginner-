class MyStack {
public:
    queue<int>q;
    queue<int>q1;
    MyStack() {
        
    }
    
    void push(int x) {
    while(!q.empty()){
        q1.push(q.front());
          q.pop();
      }  
        q.push(x);
    while(!q1.empty()){
        q.push(q1.front());
          q1.pop();
      }  
    }
    
    int pop() {   
        int top = q.front();
        q.pop();        
        return top;
    }
    
    int top() {
            return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
