class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<int,int>mp1,mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            mp2[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(s.length()!=t.length()){
                return false;
            }
            else if(mp1[s[i]]!=mp2[s[i]]){
                return false;
            }
            
        }
        return true; 
    }
};
