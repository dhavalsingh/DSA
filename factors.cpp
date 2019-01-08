vector<int> Solution::allFactors(int A) {
    vector<int> fac;
    for(int i=1;i<=sqrt(A);i++){
        if(A%i==0){
            fac.push_back(i);
        if(i!=sqrt(A)){
            fac.push_back(A/i);
            
        }
            
        }
    }
    

    sort(fac.begin(), fac.end()); 
    return fac;
}
