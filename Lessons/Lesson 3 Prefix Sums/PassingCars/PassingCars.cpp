//Codility Lesson 3, Program 1, PassingCars
int solution(vector<int> &A) {
    int eastCars = 0;
    int westCars = 0;
    int N = A.size();
    int total = 0;
    for(int i=0; i<N; ++i){
        if(A[i]==0){
            total += eastCars * westCars;
            if(total>1000000000 || total < 0){ //out of bounds errors
                return -1;
            }
            eastCars++;
            westCars = 0;
        }
        else{
            westCars++;
        }
    }
    if(A[N-1]==1){
        total += eastCars * westCars;
    }
    if(total>1000000000 || total < 0){ //out of bounds errors
        return -1;
    }
    return total;
}
