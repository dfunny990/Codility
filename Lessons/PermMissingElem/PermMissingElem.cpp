//Codility Lesson 3, PermMissingElem

int solution(vector<int> &A) {
    int N = A.size();
    bool isThere [N+1];
    for(int i = 0; i<N+1; ++i){
        isThere[i]=false;
    }
    for(int i = 0; i<N; ++i){
        int current = A[i];
        isThere[current-1]=true;
    }
    for(int i = 0; i<N+1; ++i){
        if(!isThere[i]){
            return i+1;
        }
    }
    return 0;
}
