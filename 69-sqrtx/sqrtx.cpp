class Solution {
public:
 long long int BinarySearch(int n){
 long long int  s=0;
 long long int e=n;
 long long int ans=-1;
  long long int mid=s+(e-s)/2;
    while(s<=e){
             
    long long  int  squar=mid*mid;

      
        if(squar == n ){
            return mid;
        }
        if(squar>n){
            e=mid-1;

        }
        if(squar<n){
            ans = mid;
            s= mid+1;
        }
        mid=s+(e-s)/2;
    }return ans;
}
    int mySqrt(int x) {
     return   BinarySearch(x);
    }
};