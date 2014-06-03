//Codility Lesson 2, Program 2, FrogRiverOne

int solution(int X, vector<int> &A) {
    int leavesNTimes[X][2];
    for(int i = 0; i<X; ++i){
        leavesNTimes[i][0]=0;
        leavesNTimes[i][1]=-1;
    }
    int K = A.size();
    for(int i = 0; i<K; ++i){
        int square = A[i]-1; //Stupid 1 based adjustments
        if(leavesNTimes[square][0]==0){ //Leaf hasn't fallen there yet
            leavesNTimes[square][0]=1; //Mark leaf as fallen
            leavesNTimes[square][1]=i; //Mark time first leaf fell. This ensures earliest leaf is used.
        }
    }
    //All leaves are marked as fallen with earliest times they fell.
    int minTime = -1;
    for(int i = 0; i<X; ++i){
        if (leavesNTimes[i][0]==0){ //if leaf hasn't fallen between 0 and X
            return -1; //Trip is impossible
        }
        if (minTime<leavesNTimes[i][1]){
            minTime = leavesNTimes[i][1]; //Find latest leaf that fell in 0-X-1;
        }
    }
    return minTime;
}
