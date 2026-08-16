class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++){
            int ans = pow(2,i);
            if(n== ans)
            return true;
             
           
        }return false ;
    } 
};