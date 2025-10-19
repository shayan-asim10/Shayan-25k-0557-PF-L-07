#include <stdio.h>
int main(){
int n, i;
int id[10] = {101, 202, 303, 404, 505, 606, 707, 808, 909, 100};
int size = sizeof(id)/sizeof(id[0]);
int shift[size];
printf("Enter the number to shift: ");
scanf("%d", &n);
for(i=0; i<size; i++){
    if((i+n)<size){
        shift[i+n] = id[i];
    }
    else{
        shift[(i+n)%size] = id[i];
    }
}
    printf("\nOriginal sequence: \n");
    for(int i=0; i<size; i++){
        printf("%d ",id[i]);
    }
    printf("\nShifted sequence: \n");
    for(int j=0; j<size; j++){
        printf("%d ",shift[j]);
    }
return 0;
}
