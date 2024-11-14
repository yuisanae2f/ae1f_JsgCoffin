#ifndef ae1f_JsgCoffin_Svr_h
#define ae1f_JsgCoffin_Svr_h

#include "Config.h"

/** 
 * @brief 
 * Activated when Recieved client socket has been configured. \n
 * Closing the socket when it is done is unnecessary.
 * 
 * Returning it will automatically close the socket when called @ref ClientRecvMain_Handle
 */
typedef int (*ae1f_JsgCoffin_Svr_fpClientMain_t)(ae1f_JsgCoffin_Sock_t client);

/**
 * @brief
 * Activated given client recieved. \n
 * Opens new thread, activate the @ref ClientMain, and close the socket when done.
 * 
 * @exception 
 * ClientMain, or Client could be zero. Handle it.
 */
ae2f_extern ae2f_SHAREDCALL int ae1f_JsgCoffin_Svr_ClientRecv(ae1f_JsgCoffin_Sock_t client, ae1f_JsgCoffin_Svr_fpClientMain_t clientmain);

/** * @brief Count the activated client recieved. (Thread activated count) */
ae2f_extern ae2f_SHAREDCALL int ae1f_JsgCoffin_Svr_CountOccupied();

/** @brief Wait until one thread die. */
ae2f_extern ae2f_SHAREDCALL int ae1f_JsgCoffin_Svr_Wait();

/** @brief Wait until all threades die. */
ae2f_extern ae2f_SHAREDCALL int ae1f_JsgCoffin_Svr_Join();

#endif