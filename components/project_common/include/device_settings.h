#ifndef DEVICE_SETTINGS
#define DEVICE_SETTINGS

#define ENTRANCE_PROJECTORS
//#define STOREHOUSE_PROJECTOR
//#define TESTING

// const are saved at 40200000h (flash memory)
#ifdef TESTING
static const char OWN_IP_ADDRESS[] = "192.168.0.90";
static const char DEVICE_NAME[] = "Testing";
#elif defined(ENTRANCE_PROJECTORS)
static const char OWN_IP_ADDRESS[] = "192.168.0.23";
static const char DEVICE_NAME[] = "Entrance projectors";
#elif defined(STOREHOUSE_PROJECTOR)
static const char OWN_IP_ADDRESS[] = "192.168.0.22";
static const char DEVICE_NAME[] = "Storehouse projector";
#endif

static const char OWN_NETMASK[] = "255.255.255.0";
static const char OWN_GETAWAY_ADDRESS[] = "192.168.0.1";
static const char SERVER_IP_ADDRESS[] = "192.168.0.2";
static const char ACCESS_POINT_PASSWORD[] = "x>vZf8bqX]l-qg%";
static const char ACCESS_POINT_NAME[] = "SAMSUNG";

#define SERVER_PORT 80
#define LOCAL_SERVER_PORT 80

#endif
