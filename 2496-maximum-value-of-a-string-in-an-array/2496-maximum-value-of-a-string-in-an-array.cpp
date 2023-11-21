class Solution {
public:
       bool sa( string s ) {
   for( int i = 0; i < s.length(); i++ ) {
      if( !isdigit( s[i] )) {
         return false;
      }
   }
   return true;
}
    int maximumValue(vector<string>& strs) {
        vector<int>v;
        for(string s:strs)
        {  if (sa(s))
            {v.push_back(stoi(s));}
            else
            {v.push_back(s.length());}
        }

        
 return *max_element(v.begin(),v.end());   }
};