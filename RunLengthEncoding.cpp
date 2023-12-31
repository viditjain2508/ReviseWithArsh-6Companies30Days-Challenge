string encode(string src)
{     
  //Your code here 
  int cnt=0,i=0,n=src.length();
  string res="";
  while(i<n){
      cnt=0;
      char c=src[i];
      while(i<n && c==src[i]){
          cnt++;
          i++;
      }
      res+=c;
      res+=to_string(cnt);
  }
  return res;
}   
