#include <stdio.h>
#include "../room.h"

void filterByPrice() {
    int from, to;
    printf("Enter price range (from to): ");
    scanf("%d %d", &from, &to);
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].price >= from && rooms[i].price <= to) {
            printf("Room %d | %s | %d UAH | %d★ | %s\n",
                   rooms[i].roomNumber,
                   rooms[i].city,
                   rooms[i].price,
                   rooms[i].stars,
                   rooms[i].isBooked ? "Booked" : "Available");
        }
    }
}
