#include "UART1.h"
#include "tm4c123gh6pm.h"

void scan_lidar(void);

void restart_lidar(void);

void stop_lidar(void);

void TIMER0A_Handler(int property);

void timer(int ttime, int flag);

void health(void);

void device_status(void);
