//Codility Lesson 1, Program 2, FrogJmp

int solution(int X, int Y, int D) {
    int solution = (Y-X)/D;
    if((Y-X)%D==0){
        return solution;
    }
    return solution+1;
}
