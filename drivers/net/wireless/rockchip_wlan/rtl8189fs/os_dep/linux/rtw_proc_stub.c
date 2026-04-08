#include <drv_types.h>
#include "rtw_proc.h"

struct proc_dir_entry *get_rtw_drv_proc(void)
{
	return NULL;
}

int rtw_drv_proc_init(void)
{
	return 0;
}

void rtw_drv_proc_deinit(void)
{
}

struct proc_dir_entry *rtw_adapter_proc_init(struct net_device *dev)
{
	return NULL;
}

void rtw_adapter_proc_deinit(struct net_device *dev)
{
}

void rtw_adapter_proc_replace(struct net_device *dev)
{
}
