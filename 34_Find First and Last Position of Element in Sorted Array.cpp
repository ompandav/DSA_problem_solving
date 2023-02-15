class Solution {
public:
    
    int first(vector<int>& arr, int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        int mid = s + (e-s)/2;


        while(s<=e){
            if(target < arr[mid]){
                e = mid-1;
            }
            else if(target > arr[mid]){
                s = mid + 1;
            }
            else{
                ans  = mid;
                e = mid - 1;
            }
            mid = s + (e-s)/2;
            }
            return ans;
        }
        

    int second(vector<int>& arr, int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(target < arr[mid]){
                e = mid-1;
            }
            else if(target > arr[mid]){
                s = mid + 1;
            }
            else{
                ans  = mid;
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
        }
    
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> p;
        p.push_back(first(arr, target));
        p.push_back(second(arr, target));

        return p;
    }
};
