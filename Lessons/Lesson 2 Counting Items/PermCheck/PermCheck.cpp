//Codility Lesson 2, Program 1, PermCheck

int solution(vector<int> &A) {
    int N = A.size();
    bool isThere [N];
    for(int i = 0; i<N; ++i){
        isThere[i]=false;
    }
    for(int i = 0; i<N; ++i){
        int current = A[i];
        if(current > N || current < 1){ //out of bounds check
            return 0;
        }
        isThere[current-1]=true;
    }
    for(int i = 0; i<N+1; ++i){
        if(!isThere[i]){
            return 0;
        }
    }
    return 1;
}

