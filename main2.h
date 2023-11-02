
typedef enum {
    STATUS_OFF,
    STATUS_ON
} Status;


// Define a structure for a subsystem
typedef struct {
    int data;
    Status status;
} Subsystem;

// Define a structure for the entire system containing multiple subsystems
typedef struct {
    Subsystem subsystem1;
    Subsystem subsystem2;
    // ... potentially more subsystems
} System;

System mySystem;

void printing(void);

