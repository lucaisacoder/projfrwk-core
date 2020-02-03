#include <stdio.h>
#include "core.h"
#include "log_api.h"
#include "osal_api.h"

int core_api()
{
	printf("CORE: core, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, CORE_CORE_VERSION);
	log_api();
	osal_api();
	return 0;
}
