#include <stdio.h>
int main() {
    int item[] = {1,2,3,4,5}, frequency[] = {7,5,1,10,3}, remove;
    printf("Enter the item you want to remove the occurence of: ");
    scanf("%d", &remove);
    for(int i=0;i<5;i++){
        if(item[i] == remove){
            frequency[i] = 0;
            break;
        }
    }
    for(int j=0;j<5;j++){
            printf("\n%d occurs %d times", item[j], frequency[j]);
        }
    return 0;
}