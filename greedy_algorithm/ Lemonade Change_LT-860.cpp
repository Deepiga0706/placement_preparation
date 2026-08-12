//date:24/07/2026
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        int n=bills.size();
        for(int i=0;i<n;i++){
          if(bills[i]==5){
            five++;
          }
          else if(bills[i]==10){
            if(five){
                ten++;
                five--;
            }
            else{
                return false;
            }
          }
          else{
            if(five&&ten){
                five--;
                ten--;
            }
            else if(five>=3){
                five-=3;
            }
            else{
                return false;
            }
          }
        }
        return true;
    }
};
/*Example 1:

Input: bills = [5,5,5,10,20]
Output: true
Example 2:

Input: bills = [5,5,10,10,20]
Output: false
At a lemonade stand, each lemonade costs $5. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a $5, $10, or $20 bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.*/