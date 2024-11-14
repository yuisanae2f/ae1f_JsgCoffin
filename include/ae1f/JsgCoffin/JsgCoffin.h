#ifndef ae1f_JsgCoffin_h
#define ae1f_JsgCoffin_h

#include "Config.h"

#include <ae2f/Macro/Cast.h>
#include <ae2f/Macro/Call.h>

/** @brief api starter */
ae2f_extern ae2f_SHAREDCALL void ae1f_JsgCoffin_Init();

/** @brief api terminator */
ae2f_extern ae2f_SHAREDCALL void ae1f_JsgCoffin_End();

#include "Cli.h"
#include "Svr.h"

#endif