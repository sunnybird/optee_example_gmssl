CFG_TEE_TA_LOG_LEVEL ?= 4

# SHLIBNAME=calc
# SHLIBUUID=e02fc232-9b5b-48c7-8e56-fe03f4ee3654
LIBNAME = calc

-include $(TA_DEV_KIT_DIR)/mk/ta_dev_kit.mk

ifeq ($(wildcard $(TA_DEV_KIT_DIR)/mk/ta_dev_kit.mk), )
clean:
	@echo 'Note: $$(TA_DEV_KIT_DIR)/mk/ta_dev_kit.mk not found, cannot clean TA'
	@echo 'Note: TA_DEV_KIT_DIR=$(TA_DEV_KIT_DIR)'
endif
