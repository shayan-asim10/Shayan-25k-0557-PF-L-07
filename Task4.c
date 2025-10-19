#include <stdio.h>

int main(){
    int i, j, count = 0, t = 1;
    int id[] = {1,1,1,2,2,3,3,3,3,4,4,5,5,5};
    int n = sizeof(id)/sizeof(id[0]);
    printf("\nNo. of sales: %d",n);
    for(i = 0; i<n; i++){
        if(id[i] == id[i+1]){
            continue;
        }
        count++;
    }
    printf("\nNumber of items: %d", count);
    int frequency[count];
    for (int k = 0; k < count; k++) {
    frequency[k] = 0;
}
    for(int k = 0; k<count; k++){
        for(j = 0; j<n; j++){
            if(id[j] == t){
                frequency[k]++;
            }
        }
        t++;
    }
    printf("\nFrequencies of items:\n");
    for(i = 0; i<count; i++){
        printf("Item %d: %d\n", i+1, frequency[i]);
    }

    int highest = frequency[0];
    for(i = 1; i<count; i++){
        if(frequency[i] > highest){
            highest = frequency[i];
            j = i + 1;
        }
    }
    printf("Highest sales is [%d] of item [%d]", highest, j);
    return 0;
}