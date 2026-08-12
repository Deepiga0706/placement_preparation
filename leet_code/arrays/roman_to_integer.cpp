class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>roman={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.size();
        int total=0;
        for(int i=n-1;i>=0;i--){
             if(i>0 && roman[s[i]]>roman[s[i-1]]){
                     total+=roman[s[i]]-roman[s[i-1]];
                     i--;
             }
             else{
                total+=roman[s[i]];
             }
        }
      
        return total;
    }
};