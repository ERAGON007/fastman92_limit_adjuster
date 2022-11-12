/*
* Copyright (C) fastman92 <fastman92@gmail.com>, website: http://fastman92.com
* Licensed under the MIT License, see LICENSE at top level directory.
*
*/

#pragma once

#include "../../Core/CLimitAdjusterModule.h"

class CTimer
{
public:
	static unsigned int* m_snTimeInMilliseconds;
};

class CTimer_VarInitialisation : public CLimitAdjusterModule
{
public:
	// Initialize
	void Initialise();

	// Shutdown
	void Shutdown() {}
};

extern CTimer_VarInitialisation g_CTimer_varInitialisation;