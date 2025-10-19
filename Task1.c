#include <stdio.h>
int main(){
    int id[]={1,1,2,3,4,4,5,6,7,8};
    for(int i=0;i<10;i++){
        if(id[i]==id[i+1]){
            continue;
        }
        printf(" %d", id[i]);
    }
    return 0;
}