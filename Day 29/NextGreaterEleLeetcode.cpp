class Solution {
public:
    void fun(vector<int>& arr,unordered_map<int,int> &mp,int n){
        stack<int> s;
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }

            if (s.empty()) {
                mp[arr[i]] = -1;
            } 
            else {
                mp[arr[i]] = s.top();
            }

            s.push(arr[i]);
        }

    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int n = nums2.size();
        fun(nums2,mp,n);
        for(int i=0;i<nums1.size();i++){
            int temp = mp[nums1[i]];
            ans.push_back(temp);
        }
        return ans;
    }
};
