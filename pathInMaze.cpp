#include <iostream>

using namespace std;

int allPossiblePaths(int x , int i , int j){
    if (i==x-1 && j == x-1)
    {
        return 1;
    }
    if (i>=x || j>=x)
    {
        return 0;
    }
    
    return allPossiblePaths(x,i+1,j) + allPossiblePaths(x,i,j+1);
}

int main (){
    cout<<allPossiblePaths(2,0,0);
    return 0;
}