for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        string w;
        vector<int>v;
        for(auto it=mp.begin(); it!=mp.end(); it++){
            v.push_back(it->second);
        }
        for(int k=0; k<v.size(); k++){
            cout<<v[k]<<" ";
        }
        sort(v.begin(),v.end()); 
        int i = v.size()-1;
        while(i>=0){
            int n= v[i];
            for(auto it=mp.begin(); it!=mp.end(); it++){
                if(it->second==n){
                    for(int j=0; j<n; j++){
                        w.push_back(it->first);
                    }
                    mp.erase(it->first);
                    break;
                }
        }
        i--;  
        }
        return w;