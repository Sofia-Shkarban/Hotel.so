#include <stdio.h>
#include <string.h>
#include "booking.h"

extern Room rooms[MAX_ROOMS];

void bookRoom() {
    int num;
    char name[MAX_NAME];

    showRooms();
    printf("\nEnter room number to book: ");
    scanf("%d", &num);

    if (num < 1 || num > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    if (rooms[num - 1].isBooked) {
        printf("Room is already booked.\n");
        return;
    }

    printf("Guest name: ");
    getchar();
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = 0;

    rooms[num - 1].isBooked = 1;
    strcpy(rooms[num - 1].guestName, name);

    printf("Successfully booked!\n");
}

void showBookings() {
    printf("\n--- Booking List ---\n");
    int found = 0;
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].isBooked) {
            printf("Room %d - %s\n", rooms[i].roomNumber, rooms[i].guestName);
            found = 1;
        }
    }
    if (!found) {
        printf("No bookings found.\n");
    }
}