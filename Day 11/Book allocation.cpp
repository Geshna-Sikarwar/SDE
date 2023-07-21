bool isPos(int mid,int k,int a)
{
    int pages=0;int c=0;
    int n=a.size();
    for(int i=0;i,n;i++)
    {
        if(a[i]>mid)
        return false;
        if(pages+a[i]>mid)
        {
            pages=0;
            c++;
            pages+=a[i];
        }
        else{
            pages+=a[i];
        }
        if(c>k)
        return false;
    }
    return true;
}
int books(int* arr, int n1, int B) {
    int low=0;
    int high;
    for(int i=0;i<;i++)
    {
       high+=arr[i];   
    }
    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(isPos(mid,B,arr))
        high=mid-1;
        else
        low=mid+1;
    }
    return low;
}
