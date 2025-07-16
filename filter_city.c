#include <stdio.h>
#include <string.h>
#include "../room.h"

void filterByCity() {
    char city[MAX_CITY];
    printf("Enter city: ");
    scanf("%s", city);
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (strcmp(rooms[i].city, city) == 0) {
            printf("Room %d | Price: %d | Stars: %d | %s\n",
                   rooms[i].roomNumber,
                   rooms[i].price,
                   rooms[i].stars,
                   rooms[i].isBooked ? "Booked" : "Available");
        }
    }
}
