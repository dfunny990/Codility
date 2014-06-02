#include<iostream>
#include<limits.h>
#include<cmath>
#include<vector>
using namespace std;

int solution(vector<int> &A) {
	int lsum = A[0], rsum = 0, min;
	int size = A.size();
    for(int i=1; i<size; ++i){
    	rsum += A[i];
    	cout<<A[i]<<endl;
    }
    
    cout<<lsum<<endl;
    cout<<rsum<<endl;
    min= abs(lsum-rsum);
    cout<<"Min: "<<min<<endl;
    if(A.size()==2){
        return min;
    }
    for(int i=1; i<size-1; ++i){
    	lsum += A[i];
		rsum -= A[i];
		int newmin = lsum - rsum;
		if(min > (abs(newmin))){
			min = (abs(newmin));
			cout<<"newMin: "<<min<<" i: "<<i<<" lsum: "<<lsum<<" rsum: "<<rsum<<endl;
		}
    }
    return min;
}
