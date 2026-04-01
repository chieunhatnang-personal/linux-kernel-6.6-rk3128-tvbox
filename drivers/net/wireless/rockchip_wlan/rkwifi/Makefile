# SPDX-License-Identifier: GPL-2.0
#rkwifi packed Makefile
# (gwl)

obj-$(CONFIG_AP6XXX) += bcmdhd/
obj-$(CONFIG_ESP8089) += esp8089/
obj-$(CONFIG_SSV6051) += ssv6xxx/
obj-$(CONFIG_RTL8189ES) += rtl8189es/
obj-$(CONFIG_RTL8189FS) += rtl8189fs/

.PHONY: clean

clean:
	find . -name '*.o*' -exec rm -f {} \; 
