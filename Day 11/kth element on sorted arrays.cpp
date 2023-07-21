int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int ans=-1;
        int i=0,j=0;
        if(k>=n+m)return -1;
        
        while((i+j)<k){
            
            if(i==n){
                ans=arr2[j];
                j++;
            }
            
            else if(j==m){
                
                ans=arr1[i];
                i++;
            }
            
            else if(arr1[i]>arr2[j]){
                ans=arr2[j];
                j++;
            }
            
            else {
                ans=arr1[i];
                i++;
                
            }
            
        }
         
         return ans;
    }
