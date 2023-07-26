double Power(double x,int n){

    n=abs(n);

    if(n==1)return 1;

    

    return double(x)*Power(x,n-1);

}

double myPow(double x, int n) {

   

       if(n==0)return 2.000/2.0000;

      double ans= double(x*Power(x,n));

      if(n>0)return ans;

       return (double)(1.00)/ans;

    

}
