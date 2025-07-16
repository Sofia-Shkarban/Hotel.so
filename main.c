#include <stdio.h>
#include "booking.h"
#include "room.h"

int main() {
    initializeRooms();

    int choice;
    do {
        printf("\n==== Hotel Booking Service ====\n");
        printf("1. View all rooms\n");
        printf("2. Book a room\n");
        printf("3. View all bookings\n");
        printf("4. Exit\n");
        printf("Select an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showRooms(); break;
            case 2:
                bookRoom(); break;
            case 3:
                showBookings(); break;
            case 4:
                printf("Goodbye!\n"); break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}