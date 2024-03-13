/*
    author: Shubham Maurya  
    problem Link : https://leetcode.com/problems/find-the-pivot-integer/description/
    problemName :  2485. Find the Pivot Integer
    difficulty : easy
*/
class Solution {
public:
    int pivotInteger(int n) {
         long long  sum =( n*(n+1))/2;

         for(int i =0;i<=n;i++){
           long long  sum1 = (i*(i+1))/2;
           long long sum2 = (sum -sum1)+ i;
            if(sum2 == sum1){
                return i;
            }
         }

         return -1;
    }
};
