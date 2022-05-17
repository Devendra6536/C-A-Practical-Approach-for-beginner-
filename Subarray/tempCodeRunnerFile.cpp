void nextSmallerElement(vector<int>&V){
    int n = V.size();
    stack<int>St;
    St.push(-1);
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        while (St.top()>=V[i]){
            St.pop();
        }
        ans.push_back(St.top());
        St.push(V[i]);

    }
    for(int i=0;i<V.size();i++){
        cout<<ans[i]<<" ";
    }
}