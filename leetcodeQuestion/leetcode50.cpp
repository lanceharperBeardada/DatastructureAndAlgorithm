class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        return n>=0?mul(x, n):1.0/mul(x, n);
    }
private:
    double mul(double x, int n){
        if(n==0){
            return 1.0;
        }
        double y=mul(x, n/2);
        return n%2==0?y*y:y*y*x;
    }
};