class Solution {
public:

    int sumOfDigits(int n) {
        int sum = 0;

        while(n > 0) {
            sum+= n%10;
            n/=10;
        }
        return sum;
    }
    int proOfDigits(int n) {
        int pro = 1;

        while(n > 0){
            pro *= n%10;
            n/=10;
        }
        return pro;
    }
    bool checkDivisibility(int n) {
        return !(n%(sumOfDigits(n)+proOfDigits(n)) );
    }
};