void solve(vector<vector<int>>&v,int k,vector<int>temp,int n,int j){
    if(n==0 && temp.size()==k){
        v.push_back(temp);
        return;
    }
    if(temp.size()==k)return;
    for(int i=j;i<=9;i++){
        temp.push_back(i);
        solve(v,k,temp,n-i,i+1);
        temp.pop_back();
    }
}
vector<vector<int>> combinationSum3(int k, int n) {
    vector<vector<int>>v;
    vector<int>temp;
    solve(v,k,temp,n,1);
    return v;
}
