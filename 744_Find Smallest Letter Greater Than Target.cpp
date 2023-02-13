class Solution {
public:
    char nextGreatestLetter(vector<char>& arr, char target) {
        int s = 0, e = arr.size()-1;
        int mid= s + (e-s)/2;
      
        char ans =arr[0];
        while(s<=e){
            // if(int(target) > int(arr[mid])){
            //     s = mid+1;
            // }
            if(int(target) < int(arr[mid])){
                ans=arr[mid];
                e = mid-1;
            }
            else{
               s=mid+1;
            }
            mid= s + (e-s)/2;
        }
        return ans;
    }
};
