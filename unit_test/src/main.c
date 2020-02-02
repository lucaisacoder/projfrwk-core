#include <stdio.h>
#include "core_api.h"
#include "core.h"
#include "core_ut.h"

int main()
{
	printf("COM:core, UNIT TEST:%s, VERSION:%d, UTVER:%d\n", __FUNCTION__, CORE_CORE_VERSION, CORE_CORE_UT_VERSION);
	core_api();
	return 0;
}

