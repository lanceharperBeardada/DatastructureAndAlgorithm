class Solution {
public:
    int addDigits(int num) {
        int sum=num;
        return getSum(sum);
    }

private:
    int getSum(int sum){
        if(sum<10){
            return sum;
        }
        return getSum(sum/10+sum%10);
    }
};