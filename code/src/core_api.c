#include <stdio.h>
#include "core.h"

#ifdef UNIT_TEST
int core_api()
#else
int main()
#endif
{
	printf("CORE: core, FUNCTION:%s, VERSION:%d\n", __FUNCTION__, CORE_CORE_VERSION);
	return 0;
}
