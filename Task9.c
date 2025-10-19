#include <stdio.h>

int main(){
    int booking[10] = {0};
    int confirm = 0, seat, choice = 0;
    while(confirm < 5){
        printf("\nWhat seat do you want to book?(0-9): ");
        scanf("%d", &seat);
        if(seat < 0 || seat > 9){
            printf("Invalid seat number. Please choose between 0 and 9.\n");
            continue;
        }
        if(booking[seat] == 0){
            booking[seat] = 1;
            confirm++;
            printf("Seat %d booked successfully! Total bookings: %d\n", seat, confirm);
        }
        else{
            printf("Seat %d is already booked. Please choose another seat.\n", seat);
            continue;
        }
        printf("\nDo you want to book another seat? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);
            if(choice == 0){
                printf("Thank you for using the booking system. Goodbye!\n");
                return 1;
            }
    }
    return 0;
}