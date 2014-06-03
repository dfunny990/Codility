#include<iostream>
#include<limits.h>
#include<cmath>
using namespace std;
int helper(vector<int> &A, int nums);
int solution(vector<int> &A) {
    int numsplits = A.size()-1;
    return helper(A, numsplits);
}

int helper(vector<int> &A, int nums){
    int lsum = 0, rsum = 0;
    int size = A.size();
    for(int i=0; i<size; ++i){
        if(i<nums){lsum += A[i];}
        else{rsum += A[i];}
    }
    int diff = abs(lsum-rsum);
    if(nums==1){
        return diff;
    }
    else{
        return min(diff, helper(A, nums-1));
    }
    
}

