//Codility Lesson 4, Program 1, Distinct
#include <algorithm>
using namespace std;
int solution(const vector<int> &A) {
    if(A.size()==0){return 0;}
    vector<int> B(A);
    sort(B.begin(), B.end());
    int lastInt = B[0];
    int result = 1;
    int N = B.size();
    for(int i = 1; i < N; ++i){
        if(B[i] != lastInt){
            lastInt=B[i];
            ++result;
        }
    }
    return result;
}
