class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<pair<int,int>>st; //number,index
        vector<int>ans(n,0);
        for(int i=n-1;i>=0;i--){
            while(st.size()>0&&st.top().first<=temp[i]){
                st.pop();
            }
            if(st.size()>0)
                ans[i]=st.top().second-i;
            st.push({temp[i],i});
        }
        return ans;
        
    }
};