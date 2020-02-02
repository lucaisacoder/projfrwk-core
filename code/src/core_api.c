#include <stdio.h>
#include "core.h"
#include "log_api.h"
#include "osal_api.h"

#ifdef UNIT_TEST
int core_api()
#else
int main()
#endif
{
	printf("CORE: core, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, CORE_CORE_VERSION);
	log_api();
	osal_api();
	return 0;
}
