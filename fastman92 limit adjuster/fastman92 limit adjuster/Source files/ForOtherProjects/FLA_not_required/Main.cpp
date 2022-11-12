/*
* Copyright (C) fastman92 <fastman92@gmail.com>, website: http://fastman92.com
* Licensed under the MIT License, see LICENSE at top level directory.
*
*/

#include "Main.h"

#include "IDaccess.h"

#ifdef IS_PLATFORM_ANDROID
#include <dlfcn.h>
#endif

// hModule_of_the_FLA
tGenericLibraryModule CFastman92limitAdjuster::hModule = { 0 };

// Initializes everything related to the FLA
void CFastman92limitAdjuster::Init()
{
	// Get library address
#ifdef IS_PLATFORM_WIN
	hModule.windows = GetModuleHandleA(FLA_FILENAME);
#elif defined(IS_PLATFORM_ANDROID)
	hModule.linux_os = dlopen(FLA_FILENAME, 4);	// 4 - RTLD_NOLOAD
#endif

	//////////////////////////////
	IDaccess::Init();
}