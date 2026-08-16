class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string ans="";

       if(strs.size()==1){
        return strs[0];
       }
       string first=strs[0];
       string last=strs[strs.size()-1];
       int j=0;
     while(j<first.size()&&j<last.size()){
        if(first[j]!=last[j]){
            return ans;
        }
        ans+=first[j];
        j++;
     }
     return ans;
    }
};