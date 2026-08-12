//Input: g = [1,2,3], s = [1,1]
//Output: 1
//455. Assign Cookies date:24/07/2026

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=g.size();
        int si=s.size();
        int count=0;
        int i=0;
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
       while(i < n && j < si){
            if(s[j]>=g[i]){
              i++;
              
              count++;
            }
            j++;
        }
        return count;
    }
};
/* APPROACH AND IDEA:So,here the problem is about assigning candies to the children,where the 
children has a specific greedy facter
So we sort both the arrays and traverse them ,since both are sorted if 1st child is not satisfies with any of the given number of candies,then obviously the rest wouldn't
it id does satisfies we both both the pointer else we move the pointer pointing to candies*/