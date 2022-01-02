vector<vector<string> > Anagrams(vector<string>& string_list) {
      
       vector<vector<string>> rt;
       map<string,vector<string>> mp;
       for(int i=0;i<string_list.size();i++)
       {
           string cword= string_list[i];
           sort(cword.begin(),cword.end());
           if(mp.find(cword)!=mp.end())
           {
               mp[cword].push_back(string_list[i]);
           }
           else{
               vector<string> v;
               v.push_back(string_list[i]);
               mp.insert({cword,v});
           }
       }
       for( auto it = mp.begin(); it != mp.end(); ++it ) {
       rt.push_back( it->second );
        }
        return rt;
   
   }
