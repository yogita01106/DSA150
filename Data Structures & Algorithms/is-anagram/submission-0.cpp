class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>string1;
        map<char,int>string2;
        if (s.size()!=t.size())return false;
        for (char i:s){
            string1[i]++;
        }
        for (char i:t){
            string2[i]++;
        }
        for (int i=0;i<string2.size();i++){
            if (string1[i]!=string2[i])return false;
        }
    return true;
    }
};
