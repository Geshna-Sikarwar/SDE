vector<vector<int>> zeroMatrix(vector<vector<int>> &a, int m, int n) {

    bool r[m]={0},c[n]={0};

 

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(a[i][j]==0){

                r[i]=1;

                c[j]=1;

            }

        }

    }

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            if(r[i] || c[j]){

                a[i][j]=0;

            }

        }

    }

    return a;

}
