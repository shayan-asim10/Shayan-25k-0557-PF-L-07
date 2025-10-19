#include <stdio.h>
int main(){
    int secA[] = {1,2,3,4,5}, secB[] = {6,7,8,9,10};
    int combined[10], i,j=-1;
    for(i = 0; i < 10; i++){
        if(i<5){
            combined[i] = secA[i];
        }
        else{
            j++;
            combined[i] = secB[j];
        }
    }
    for(int j = 0; j < 10; j++){
        printf("%d ", combined[j]);
    }
    return 0;
}