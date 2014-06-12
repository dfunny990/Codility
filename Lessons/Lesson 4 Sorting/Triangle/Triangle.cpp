//Codility Lesson 4, Program 3, Triangle
#include <algorithm>
int solution(const vector<int> &A) {
    if(A.size()<3){return 0;}
    vector<int> B(A);
    std::sort(B.begin(), B.end());
    for(unsigned i=0; i<B.size()-2; ++i){
        if(B[i]>0 && B[i]>B[i+2]-B[i+1]){return 1;} //lookin out for overflow
    }
    return 0;
}
