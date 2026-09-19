class Solution {
public:
    bool isAnagram(string s, string t) {
        if((s.length() != t.length()) || s.length() == 0 || t.length() == 0)
        {
            return false;
        }
        
        std::sort(s.begin(),s.end());
        std::sort(t.begin(),t.end());

        if(s==t)
            return true;
        else
            return false;

    }
};
