#include <stdio.h>
int main(){
    int i,o,e,j;
    int id[50], even[50], odd[50];
    char confirm = 'y';
    for(i=0; confirm == 'y'; i++){
        printf("Enter ID: ");
        scanf("%d", &id[i]);
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &confirm);
        o=-1;
        e=-1;
    }
    for(j=0;j<i;j++){
        if(id[j]%2 == 0){
            e++;
            even[e] = id[j];
        } else {
            o++;
            odd[o] = id[j];
        }
    }
        printf("\nEven IDs:");
        for(j=e;j>=0;j--){
            printf("\n%d", even[j]);
        }
        printf("\nOdd IDs:");
        for(j=o;j>=0;j--){
            printf("\n%d", odd[j]);
        }
        return 0;
}