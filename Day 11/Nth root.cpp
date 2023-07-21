int NthRoot(int n, int m) {
  // Write your code here.
  int l=1,h=m;
  while(l<=h)
  {
    int mid=(l+h)/2;
    int a=pow(mid,n);
    if(a==m)return mid;
    else if(mid>m)
    l=mid+1;
    else
    h=mid-1;
  }
  return -1;
}
