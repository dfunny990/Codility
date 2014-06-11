//Codility Lesson 3, Program 3, MinAvgTwoSlice
#include <iostream>
using namespace std;
int solution(vector<int> &A) {
    int N = A.size();
    double minAvg= 10001;
    int pos=0, tempSum;
    double tempAvg;
    for(int i = 0; i < N-2; ++i){
        tempSum = (0 + A[i] + A[i+1]);
        tempAvg = tempSum/2.0;
        if(tempAvg < minAvg){
            minAvg=tempAvg;
            pos=i;
        }
        tempSum += A[i+2];
        tempAvg = tempSum/3.0;
        if(tempAvg < minAvg){
            minAvg=tempAvg;
            pos=i;
        }
    }
    tempSum = A[N-1] + A[N-2];
    tempAvg = tempSum/2.0;
    if(tempAvg < minAvg){
        minAvg=tempAvg;
        pos=N-2;
    }
    return pos;
}
