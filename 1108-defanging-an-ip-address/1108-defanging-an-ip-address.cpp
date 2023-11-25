class Solution {
public:
    string defangIPaddr(string s) {
             queue<int>q;
             string p;
        for (int i=0;i<s.size();i++){
              q.push(s[i]); 
        } 
            while(!q.empty()){
                if (q.front()=='.'){
                  p+='[';
                  p+='.';
                  p+=']';
                }
                else {
                    p+=q.front();
                }
                q.pop();
            }
        return p; 
    }
};