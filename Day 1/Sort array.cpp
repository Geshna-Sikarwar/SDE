#include <bits/stdc++.h> 

void sort012(int *arr, int n)

{

   int mx=*max_element(arr,arr+n);

   vector<int>v(mx+1);

   for(int i=0;i<n;i++){

      v[arr[i]]++;

   }

   int i=0,j=0;

   while(i<mx+1){

      if(v[i]>0){

         arr[j++]=i;

         v[i]--;

      }

      else{

         i++;

      }

   }

   //   Write your code here

}
