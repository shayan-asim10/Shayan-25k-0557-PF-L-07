#include <stdio.h>
#include <stdlib.h>
int main(){
    int n[10] = {rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand()}, search;
    int size = sizeof(n)/sizeof(n[0]);
    printf("The numbers are:\n");
    for(int i = 0; i<size; i++){
        printf("%d ",n[i]);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &search);
    for(int i = 0; i<size; i++){
        if(n[i] == search){
            printf("\nNumber exists at slot %d", i+1);
            return 1;
        }
    }
    printf("\nNumber does not exist in the list.");
    return 0;
}