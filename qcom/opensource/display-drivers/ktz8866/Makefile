# SPDX-License-Identifier: GPL-2.0
#
# kernel.mk's make-external-module-target runs `make -C <this dir> M=<rpath> modules`,
# and `-C` requires a Makefile to exist here before kbuild ever reads Kbuild. With
# only a Kbuild present the build died with:
#   make: *** No targets specified and no makefile found.  Stop.
# This mirrors the delegate pattern used by the other ext modules (e.g.
# mm-sys-kernel/ubwcp, display-drivers/msm).
all: modules

modules_install:
	$(MAKE) INSTALL_MOD_STRIP=1 -C $(KERNEL_SRC) M=$(M) modules_install

clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) clean

%:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) $@ $(KBUILD_OPTIONS)
