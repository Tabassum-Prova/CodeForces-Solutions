#include <stdio.h>
int main(){

    int no_of_friends, fingers_i;
    scanf("%d", &no_of_friends);

    int other_fingers = 0;

    for(int i = 1; i <= no_of_friends; i++) {
        scanf("%d", &fingers_i);
        other_fingers += fingers_i;
    }

    int no_of_choices = 0;
    int no_of_people = no_of_friends + 1;

    for(int dima_fingers = 1; dima_fingers<=5; dima_fingers++) {
        int total_fingers = other_fingers + dima_fingers;
        no_of_choices += (total_fingers % no_of_people !=1);
    }

    printf("%d", no_of_choices);

    return 0;
}