vector<vector<int>> pascalTriangle(int N) {
   vector<vector<int>> v(N);
   for(int i = 0; i < N; i++) {
       v[i].resize(i+1, 1);
       for(int j = 1; j < i; j++) {
           v[i][j] = v[i-1][j-1] + v[i-1][j]; 
       } 
   }
   return v;
}
