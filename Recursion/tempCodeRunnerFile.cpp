void print(vector<int>v){
    int sum = 0;
    int n = v.size();
    for(int i=0;i<n;i++){
        // cout<<v[i]<<" ";

    sum+=v[i];
    }
    cout<<sum<<endl;
    if(v.size()==0){
		cout<<"{}";
	}
}