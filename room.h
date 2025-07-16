#ifndef ROOM_H
#define ROOM_H

#define MAX_ROOMS 5
#define MAX_NAME 100

typedef struct {
    int roomNumber;
    int isBooked;
    char guestName[MAX_NAME];
} Room;

extern Room rooms[MAX_ROOMS];

void initializeRooms();
void showRooms();
void filterByPrice();

#endif