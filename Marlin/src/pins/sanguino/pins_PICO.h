#if defined(__AVR_ATmega1284P__)
#define LARGE_FLASH true
#endif

//#if !defined(__AVR_ATmega644P__) && !defined(__AVR_ATmega1284P__)
//#error Oops!  Make sure you have 'Sondori Pico' selected from the 'Tools -> Boards' menu.
//#endif

//#define KEY1 27
//#define LED1 10

//#define KEY2 28
//#define LED2 11

//#define KEY3 29
//#define LED3 16

//#define KEY4 30
//#define LED4 17

#define STARTK_PIN 27          //PRINT_START_PIN 27
#define RGB_LED_R_PIN 10	//PRINT_LED 10

#define PLUSK_PIN 28          //FEED_PIN 28
#define RGB_LED_B_PIN 11	//FEED_LED 11

#define MINUSK_PIN 29          //RETRACT_PIN 29
#define RGB_LED_G_PIN 16 	//RETRACT_LED 16

#define HOME_PIN 30  		//Z_HOME_PIN 30
#define RGB_LED_W_PIN 17	//HOME_LED 17

#define X_STEP_PIN 15
#define X_DIR_PIN 21
#define X_STOP_PIN 18

#define Y_STEP_PIN 22
#define Y_DIR_PIN 23
#define Y_STOP_PIN 19

#define Z_STEP_PIN 3
#define Z_DIR_PIN 2
#define Z_STOP_PIN 20

#define E0_STEP_PIN 1
#define E0_DIR_PIN 0

#define FAN0_PIN 4 // Fan pin relocated in extruder fan control!! If using auto extruder fan, delete this or remark this line

#define FAN_PIN 4 // Fan pin relocated in extruder fan control!! If using auto extruder fan, delete this or remark this line

#define LED_PIN 27

#define PS_ON_PIN -1
#define KILL_PIN -1

#define HEATER_0_PIN 13
#define HEATER_1_PIN -1
#define HEATER_2_PIN -1

#define HEATER_BED_PIN 12
#define X_ENABLE_PIN 14
#define Y_ENABLE_PIN 14
#define Z_ENABLE_PIN 26
#define E0_ENABLE_PIN 14

#define TEMP_0_PIN 7
#define TEMP_1_PIN -1
#define TEMP_2_PIN -1
#define TEMP_BED_PIN 6
#define SDPOWER_PIN -1
#define SDSS 31
