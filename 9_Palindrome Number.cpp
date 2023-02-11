class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> vect; int dick;
        while(x!=0){
            dick = x%10;
            vect.push_back(dick);
            x = x/10;
        }
        int s = 0, e = vect.size()-1;
        while(s<=e){
            if(vect[s]==vect[e]){
                s=s+1;
                e=e-1;
            }
            else{
               return false;
            }
        }
        return true;
    }
};
