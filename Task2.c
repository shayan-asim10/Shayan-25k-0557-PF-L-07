#include <stdio.h>

int main(){
    int i;
    int marks[10];
    for(i=0;i<10;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d", &marks[i]);
    }
    int highest = marks[0];
    for(int j=1;j<10;j++){
        if(marks[j]>highest){
            highest = marks[j];
        }
    }
    printf("The highest marks are: %d\n",highest);
    return 0;
}