//Codility Lesson 2, Program 3, Max Counters
vector<int> solution(int N, vector<int> &A) {
    vector<int> result;
    int currentMax=0, M=A.size(), lastMaxed=0;
    result.assign(N,currentMax);
    for(int i=0; i<M; ++i){
        int curCounter = A[i] - 1;      //was looking up this value a lot, stupid 1 indexed adjustments
        if(curCounter<N){               //increment
            if(result[curCounter]<lastMaxed){
                result[curCounter]=lastMaxed+1;
            }
            else{
                result[curCounter]++;
            }
            if(result[curCounter]>currentMax){
                currentMax = result[curCounter];    //Keep track of current max instead of looking for it.
            }
        }
        else{
            lastMaxed=currentMax;
        }
    }
    for(int i=0; i<N; ++i){
        if(result[i]<lastMaxed){
            result[i]=lastMaxed;
        }
    }
    return result;
}
