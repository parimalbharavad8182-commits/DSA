class Solution {
public:
    void reverseString(vector<char>& s) {
        int a =0;
        int b = s.size()-1;
        while(a<b){
            swap(s[a++],s[b]);
            b--;
        }
        
    }
};