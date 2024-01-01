void solve(vector<string>&res,string &s,vector<string>&v,int i,string temp){
        if(i==s.size()){
            res.push_back(temp);
            return;
        }
        string str=v[s[i]-'2'];
        for(int j=0;j<str.size();j++){
            solve(res,s,v,i+1,temp+str[j]);
        }
    }
    vector<string> letterCombinations(string s) {
        if(s.length()==0)return {};
        vector<string>v={{"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}};
        vector<string>res;
        solve(res,s,v,0,"");
        return res;
    }
