#include <stdio.h>

enum State { IDLE, RUNNING, PAUSED, DONE };

void print_state(enum State s) {
    switch (s) {
        case IDLE:
            printf("State: IDLE\n");
            break;
        case RUNNING:
            printf("State: RUNNING\n");
            break;
        case PAUSED:
            printf("State: PAUSED\n");
            break;
        case DONE:
            printf("State: DONE\n");
            break;
    }
}

int main(void) {
    print_state(RUNNING);
    return 0;
}