class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());
        
        
        // for(int i=0;i<nums1.size();i++){
        //     bool flag=false;
        //     int temp=-1;
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j]){
        //             flag=true;
        //         }
        //         if(flag==true && nums2[j]>nums1[i]){
        //             temp=nums2[j];
        //             break;
        //         }
        //     }
        //     ans[i]=temp;
        // }
        // return ans;

        // optimal approach
        unordered_map<int,int>mpp;
        int n=nums2.size();
        mpp[nums2[n-1]]=-1;
        stack<int>st;
        st.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0&&st.top()<nums2[i]){
                st.pop();
            }
            if(st.size()>0){
                mpp[nums2[i]]=st.top();
            }else{
                 mpp[nums2[i]]=-1;
            }
           
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mpp.find(nums1[i])!=mpp.end()){
                ans[i]=mpp[nums1[i]];
            }else{
                ans[i]=-1;
            }
        }
        return ans;
        
    }
};