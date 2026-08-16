class Solution {
public:
    string intToRoman(int num) {
       map<int,string,greater<int>>roman={{1,"I"},{5,"V"},{4,"IV"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
       string ans="";
       while(num>0){
        if(roman.find(num)!=roman.end()){
              ans+=roman[num];
               num -= num; 
        }
        else{
            for(auto it:roman){
                if(it.first<=num){
                    ans+=it.second;
                    num-=it.first;
                    break;
                }
            }
        }
        
       }

return ans;
    }
};