#include <stdio.h>

typedef enum {
    STOPPED,
    RUNNING
} State;

typedef struct Machine Machine;

struct Machine {
    State state;
    void (*start)(Machine *m);
    void (*stop)(Machine *m);
};

void start(Machine *m) {
    m->state = RUNNING;
}

void stop(Machine *m) {
    m->state = STOPPED;
}

const char *state_name(State state) {
    if (state == RUNNING) {
        return "RUNNING";
    }
    return "STOPPED";
}

int main() {
    Machine m = {STOPPED, start, stop};

    m.start(&m);
    printf("State: %s\n", state_name(m.state));
    return 0;
}
