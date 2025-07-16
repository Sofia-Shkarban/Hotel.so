#include <stdio.h>
#include "room.h"

void filterByStars() {
    int stars;
    printf("Enter star rating (1-5): ");
    scanf("%d", &stars);
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].stars == stars) {
            printf("Room %d | %s | %d UAH | %d★ | %s\n",
                   rooms[i].roomNumber,
                   rooms[i].city,
                   rooms[i].price,
                   rooms[i].stars,
                   rooms[i].isBooked ? "Booked" : "Available");
        }
    }
}
