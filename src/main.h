//Main.h
#ifndef _MAIN_H_
#define _MAIN_H_

#include "common/types.h"
#include "dynamic_libs/os_functions.h"



/* Main */
#ifdef __cplusplus
extern "C" {
#endif

extern u16 LOCAL_APP_VERSION;

//! C wrapper for our C++ functions
int Menu_Main(void);

#ifdef __cplusplus
}
#endif

#endif
