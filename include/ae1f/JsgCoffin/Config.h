#ifndef ae1f_JsgCoffin_Config_h
#define ae1f_JsgCoffin_Config_h
#ifdef _WIN32
#include <winsock2.h>
#pragma comment(lib, "ws2_32.lib")
/** @brief close the socket. */
#define ae1f_JsgCoffin_CloseSock closesocket

#else
#include <unistd.h>
#include <arpa/inet.h>

#include <ae2f/Macro/Cast.h>
#include <ae2f/Macro/Call.h>

typedef int ae1f_JsgCoffin_Sock_t;


#endif
#endif