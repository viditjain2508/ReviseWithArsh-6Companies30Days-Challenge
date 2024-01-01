int peopleAwareOfSecret(int n, int delay, int forget) {
      vector<int>mp(1001,0);
      int i,j,mod=1e9+7;
      for(i=1;i<=delay;i++)mp[i]=1;
      for(i=1+delay;i<=n;i++){
          if(i>=forget){
              int x=mp[i-forget];
              for(j=i-forget;j<=i;j++){
                  mp[j]=(mp[j]-x+mod)%mod;
              };
          }
          mp[i]=(mp[i-1]+mp[i-delay])%mod;
     }
     return mp[n];
}
