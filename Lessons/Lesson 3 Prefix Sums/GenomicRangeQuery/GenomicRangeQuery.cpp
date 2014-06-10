//Codility Lesson 3, Program 2, GenomicRangeQuery
int checkChar(char x);
vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int N = S.length();
    int M = P.size();
    int sums[4][N+1];
    vector<int> results;
    sums[0][0]=0;
    sums[1][0]=0;
    sums[2][0]=0;
    sums[3][0]=0;
    for(int i=0; i<N; ++i){
        sums[0][i+1]=sums[0][i];
        sums[1][i+1]=sums[1][i];
        sums[2][i+1]=sums[2][i];
        sums[3][i+1]=sums[3][i];
        int check = checkChar(S[i]);
        sums[check][i+1]++;
    }
    
    for(int i=0; i<M; ++i){
        int result=0;
        int start=P[i]+1;
        int end=Q[i]+1;
        for(int j=0; j<4; ++j){
            result = sums[j][end] - sums[j][start-1];
            if(result>0){
                result=j+1;
                break;
            }
        }
        results.push_back(result);
    }
    return results;
}

int checkChar(char x){
    if(x=='A'){return 0;}
    if(x=='C'){return 1;}
    if(x=='G'){return 2;}
    return 3;
}
