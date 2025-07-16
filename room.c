#include <stdio.h>
#include <string.h>
#include "room.h"

Room rooms[MAX_ROOMS];

void initializeRooms() {
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].isBooked = 0;
        strcpy(rooms[i].guestName, "");
    }
}

void showRooms() {
    printf("\n--- Rooms ---\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("Room %d - %s\n", rooms[i].roomNumber,
               rooms[i].isBooked ? "Booked" : "Available");
    }
}