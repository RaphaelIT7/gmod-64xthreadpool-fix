#include <GarrysMod/Lua/Interface.h>
#include "platform.h"

#define DEDICATED
#include "vstdlib/jobthread.h"

GMOD_MODULE_OPEN()
{
	ThreadPoolStartParams_t startParams;
	startParams.bEnableOnLinuxDedicatedServer = true;
	g_pThreadPool->Start(startParams);

	return 0;
}

GMOD_MODULE_CLOSE()
{
	return 0;
}