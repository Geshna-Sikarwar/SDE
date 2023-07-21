bool check(string s,vector<string> &B){
    for(int i=0;i<B.size();i++){
        if(s==B[i]){
            return true;
        }
    }
    return false;
}
bool solve(int ind,string A,vector<string> &B){
    int n = A.size();
    if(ind>=n){
        return true;
    }
    for(int j=ind;j<n;j++){
        string str = A.substr(ind,j-ind+1);
        if(check(str,B) && solve(j+1,A,B)){
            return true;
        } 
    }
    return false;
}
    int wordBreak(string A, vector<string> &B) {
        
     
        if(solve(0,A,B)){
            return 1;
        }else{
            return 0;
        }
        
    }
