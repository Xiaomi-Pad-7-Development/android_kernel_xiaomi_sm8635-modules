# SPDX-License-Identifier: GPL-2.0-only

KBUILD_OPTIONS += TOUCH_ROOT=$(KERNEL_SRC)/$(M)
KBUILD_OPTIONS += TOUCHFEATURE_ROOT=$(KERNEL_SRC)/$(M)/../
KBUILD_OPTIONS += KBUILD_EXTRA_SYMBOLS=$(OUT_DIR)/../sm8635-modules/qcom/opensource/display-drivers/msm/Module.symvers
KBUILD_OPTIONS += CONFIG_TOUCH_THP_SUPPORT=1
KBUILD_OPTIONS += CONFIG_TOUCH_TDDI_SUPPORT=1
KBUILD_OPTIONS += CONFIG_TOUCH_STYLUS_SUPPORT=1
KBUILD_OPTIONS += CONFIG_DISABLE_POWER_STATUS=1

all:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) modules $(KBUILD_OPTIONS)

modules_install:
	$(MAKE) INSTALL_MOD_STRIP=1 -C $(KERNEL_SRC) M=$(M) modules_install

%:
	$(MAKE) -C $(KERNEL_SRC) M=$(M) $@ $(KBUILD_OPTIONS)

clean:
	rm -f *.o *.ko *.mod.c *.mod.o *~ .*.cmd Module.symvers
	rm -rf .tmp_versions
