#ifndef _out_arm_include_generated_conf_h_
#define _out_arm_include_generated_conf_h_
#define CFG_AES_GCM_TABLE_BASED 1
#define CFG_ARM32_ta_arm32 1
#define CFG_ARM64_core 1
#define CFG_ARM64_ldelf 1
#define CFG_ARM64_ta_arm64 1
#define CFG_ARM_GICV3 1
/* CFG_ATTESTATION_PTA is not set */
#define CFG_ATTESTATION_PTA_KEY_SIZE 3072
/* CFG_BOOT_SECONDARY_REQUEST is not set */
#define CFG_CC_OPT_LEVEL 0
#define CFG_COMPAT_GP10_DES 1
#define CFG_CORE_ARM64_PA_BITS 32
#define CFG_CORE_ASLR 1
/* CFG_CORE_ASYNC_NOTIF is not set */
#define CFG_CORE_ASYNC_NOTIF_GIC_INTID 0
/* CFG_CORE_BGET_BESTFIT is not set */
#define CFG_CORE_BIGNUM_MAX_BITS 4096
/* CFG_CORE_BTI is not set */
#define CFG_CORE_CLUSTER_SHIFT 2
/* CFG_CORE_DEBUG_CHECK_STACKS is not set */
/* CFG_CORE_DUMP_OOM is not set */
#define CFG_CORE_DYN_SHM 1
#define CFG_CORE_HAS_GENERIC_TIMER 1
#define CFG_CORE_HEAP_SIZE 65536
#define CFG_CORE_HUK_SUBKEY_COMPAT 1
/* CFG_CORE_HUK_SUBKEY_COMPAT_USE_OTP_DIE_ID is not set */
/* CFG_CORE_LARGE_PHYS_ADDR is not set */
#define CFG_CORE_MAX_SYSCALL_RECURSION 4
#define CFG_CORE_MBEDTLS_MPI 1
#define CFG_CORE_NEX_HEAP_SIZE 16384
/* CFG_CORE_PAGE_TAG_AND_IV is not set */
/* CFG_CORE_PAUTH is not set */
/* CFG_CORE_PREALLOC_EL0_TBLS is not set */
#define CFG_CORE_RESERVED_SHM 1
/* CFG_CORE_RODATA_NOEXEC is not set */
#define CFG_CORE_RWDATA_NOEXEC 1
/* CFG_CORE_SANITIZE_KADDRESS is not set */
/* CFG_CORE_SANITIZE_UNDEFINED is not set */
#define CFG_CORE_THREAD_SHIFT 0
/* CFG_CORE_TPM_EVENT_LOG is not set */
#define CFG_CORE_TZSRAM_EMUL_SIZE 458752
#define CFG_CORE_UNMAP_CORE_AT_EL0 1
#define CFG_CORE_WORKAROUND_NSITR_CACHE_PRIME 1
#define CFG_CORE_WORKAROUND_SPECTRE_BP 1
#define CFG_CORE_WORKAROUND_SPECTRE_BP_SEC 1
#define CFG_CRYPTO 1
#define CFG_CRYPTOLIB_DIR core/lib/libtomcrypt
#define CFG_CRYPTOLIB_NAME tomcrypt
#define CFG_CRYPTOLIB_NAME_tomcrypt 1
#define CFG_CRYPTO_AES 1
/* CFG_CRYPTO_AES_GCM_FROM_CRYPTOLIB is not set */
#define CFG_CRYPTO_CBC 1
#define CFG_CRYPTO_CBC_MAC 1
#define CFG_CRYPTO_CBC_MAC_BUNDLE_BLOCKS 64
#define CFG_CRYPTO_CCM 1
#define CFG_CRYPTO_CMAC 1
#define CFG_CRYPTO_CONCAT_KDF 1
#define CFG_CRYPTO_CTR 1
#define CFG_CRYPTO_CTS 1
#define CFG_CRYPTO_DES 1
#define CFG_CRYPTO_DH 1
#define CFG_CRYPTO_DSA 1
#define CFG_CRYPTO_ECB 1
#define CFG_CRYPTO_ECC 1
#define CFG_CRYPTO_ED25519 1
#define CFG_CRYPTO_GCM 1
#define CFG_CRYPTO_HKDF 1
#define CFG_CRYPTO_HMAC 1
#define CFG_CRYPTO_MD5 1
#define CFG_CRYPTO_PBKDF2 1
#define CFG_CRYPTO_RSA 1
#define CFG_CRYPTO_RSASSA_NA1 1
#define CFG_CRYPTO_SHA1 1
#define CFG_CRYPTO_SHA224 1
#define CFG_CRYPTO_SHA256 1
#define CFG_CRYPTO_SHA384 1
#define CFG_CRYPTO_SHA512 1
#define CFG_CRYPTO_SHA512_256 1
#define CFG_CRYPTO_SIZE_OPTIMIZATION 1
#define CFG_CRYPTO_SM2_DSA 1
#define CFG_CRYPTO_SM2_KEP 1
#define CFG_CRYPTO_SM2_PKE 1
#define CFG_CRYPTO_SM3 1
#define CFG_CRYPTO_SM4 1
#define CFG_CRYPTO_X25519 1
#define CFG_CRYPTO_XTS 1
#define CFG_DEBUG_INFO 1
#define CFG_DEVICE_ENUM_PTA 1
#define CFG_DRIVERS_CLK 1
#define CFG_DRIVERS_CLK_DT 1
/* CFG_DRIVERS_CLK_EARLY_PROBE is not set */
#define CFG_DRIVERS_CLK_FIXED 1
/* CFG_DRIVERS_DT_RECURSIVE_PROBE is not set */
#define CFG_DRIVERS_RSTCTRL 1
/* CFG_DRIVERS_RTC is not set */
/* CFG_DRIVERS_TPM2 is not set */
/* CFG_DRIVERS_TPM2_MMIO is not set */
#define CFG_DT 1
#define CFG_DTB_MAX_SIZE 0x100000
#define CFG_DT_DRIVER_EMBEDDED_TEST 1
#define CFG_EARLY_TA 1
#define CFG_EARLY_TA_COMPRESS 1
#define CFG_EMBEDDED_TS 1
#define CFG_EMBED_DTB 1
#define CFG_EMBED_DTB_SOURCE_FILE embedded_dtb_test.dts
#define CFG_ENABLE_EMBEDDED_TESTS 1
/* CFG_ENABLE_SCTLR_RR is not set */
/* CFG_ENABLE_SCTLR_Z is not set */
#define CFG_EXTERNAL_DT 1
/* CFG_EXTERNAL_DTB_OVERLAY is not set */
#define CFG_FTRACE_BUF_WHEN_FULL shift
/* CFG_FTRACE_SUPPORT is not set */
#define CFG_FTRACE_US_MS 10000
/* CFG_GENERATE_DTB_OVERLAY is not set */
#define CFG_GIC 1
#define CFG_GP_SOCKETS 1
/* CFG_HWRNG_PTA is not set */
#define CFG_HWSUPP_MEM_PERM_PXN 1
#define CFG_HWSUPP_MEM_PERM_WXN 1
#define CFG_IN_TREE_EARLY_TAS trusted_keys/f04a0fe7-1f5d-4b9b-abf7-619b85b4ce8c
#define CFG_KERN_LINKER_ARCH aarch64
#define CFG_KERN_LINKER_FORMAT elf64-littleaarch64
#define CFG_LIBUTILS_WITH_ISOC 1
/* CFG_LOCKDEP is not set */
#define CFG_LOCKDEP_RECORD_STACK 1
#define CFG_LPAE_ADDR_SPACE_BITS 32
/* CFG_MAP_EXT_DT_SECURE is not set */
#define CFG_MAX_CACHE_LINE_SHIFT 6
/* CFG_MEMTAG is not set */
#define CFG_MMAP_REGIONS 13
#define CFG_MSG_LONG_PREFIX_MASK 0x1a
#define CFG_NUM_THREADS 2
/* CFG_OPTEE_REVISION_EXTRA is not set */
#define CFG_OPTEE_REVISION_MAJOR 3
#define CFG_OPTEE_REVISION_MINOR 19
#define CFG_OS_REV_REPORTS_GIT_SHA1 1
/* CFG_PAGED_USER_TA is not set */
#define CFG_PKCS11_TA_ALLOW_DIGEST_KEY 1
#define CFG_PKCS11_TA_AUTH_TEE_IDENTITY 1
#define CFG_PKCS11_TA_HEAP_SIZE (32 * 1024)
#define CFG_PKCS11_TA_TOKEN_COUNT 3
#define CFG_PL011 1
#define CFG_PREALLOC_RPC_CACHE 1
#define CFG_REE_FS 1
/* CFG_REE_FS_ALLOW_RESET is not set */
/* CFG_REE_FS_INTEGRITY_RPMB is not set */
#define CFG_REE_FS_TA 1
/* CFG_REE_FS_TA_BUFFERED is not set */
#define CFG_RESERVED_VASPACE_SIZE (1024 * 1024 * 10)
/* CFG_RPMB_FS is not set */
#define CFG_RPMB_FS_CACHE_ENTRIES 0
/* CFG_RPMB_FS_DEBUG_DATA is not set */
#define CFG_RPMB_FS_DEV_ID 0
#define CFG_RPMB_FS_RD_ENTRIES 8
/* CFG_RPMB_RESET_FAT is not set */
/* CFG_RPMB_TESTKEY is not set */
/* CFG_RPMB_WRITE_KEY is not set */
/* CFG_RTC_PTA is not set */
/* CFG_SCMI_MSG_DRIVERS is not set */
/* CFG_SCMI_PTA is not set */
/* CFG_SCTLR_ALIGNMENT_CHECK is not set */
#define CFG_SECSTOR_TA 1
#define CFG_SECSTOR_TA_MGMT_PTA 1
/* CFG_SECURE_DATA_PATH is not set */
/* CFG_SECURE_PARTITION is not set */
#define CFG_SECURE_TIME_SOURCE_CNTPCT 1
#define CFG_SHMEM_SIZE 0x00200000
#define CFG_SHMEM_START 0x42000000
/* CFG_SHOW_CONF_ON_BOOT is not set */
#define CFG_SM_NO_CYCLE_COUNTING 1
/* CFG_SPMC_TESTS is not set */
#define CFG_SP_INIT_INFO_MAX_SIZE 0x1000
#define CFG_STACK_THREAD_EXTRA 0
#define CFG_STACK_TMP_EXTRA 0
/* CFG_SYSCALL_FTRACE is not set */
/* CFG_SYSCALL_WRAPPERS_MCOUNT is not set */
#define CFG_SYSTEM_PTA 1
#define CFG_TA_ASLR 1
#define CFG_TA_ASLR_MAX_OFFSET_PAGES 128
#define CFG_TA_ASLR_MIN_OFFSET_PAGES 0
#define CFG_TA_BGET_TEST 1
#define CFG_TA_BIGNUM_MAX_BITS 2048
/* CFG_TA_BTI is not set */
#define CFG_TA_FLOAT_SUPPORT 1
/* CFG_TA_GPROF_SUPPORT is not set */
#define CFG_TA_MBEDTLS 1
#define CFG_TA_MBEDTLS_MPI 1
#define CFG_TA_MBEDTLS_SELF_TEST 1
/* CFG_TA_PAUTH is not set */
#define CFG_TA_STRICT_ANNOTATION_CHECKS 1
#define CFG_TEE_API_VERSION GPD-1.1-dev
/* CFG_TEE_BENCHMARK is not set */
#define CFG_TEE_CORE_DEBUG 1
#define CFG_TEE_CORE_EMBED_INTERNAL_TESTS 1
#define CFG_TEE_CORE_LOG_LEVEL 4
/* CFG_TEE_CORE_MALLOC_DEBUG is not set */
#define CFG_TEE_CORE_NB_CORE 4
#define CFG_TEE_CORE_TA_TRACE 1
#define CFG_TEE_FW_IMPL_VERSION FW_IMPL_UNDEF
#define CFG_TEE_FW_MANUFACTURER FW_MAN_UNDEF
#define CFG_TEE_IMPL_DESCR OPTEE
#define CFG_TEE_MANUFACTURER LINARO
#define CFG_TEE_SDP_MEM_SIZE 0x00400000
#define CFG_TEE_TA_LOG_LEVEL 4
/* CFG_TEE_TA_MALLOC_DEBUG is not set */
#define CFG_TZDRAM_SIZE 0x00f00000
#define CFG_TZDRAM_START 0x0e100000
/* CFG_ULIBS_MCOUNT is not set */
/* CFG_ULIBS_SHARED is not set */
#define CFG_UNWIND 1
/* CFG_VIRTUALIZATION is not set */
#define CFG_WARN_DECL_AFTER_STATEMENT 1
#define CFG_WARN_INSECURE 1
/* CFG_WDT is not set */
/* CFG_WDT_SM_HANDLER is not set */
#define CFG_WITH_ARM_TRUSTED_FW 1
#define CFG_WITH_LPAE 1
/* CFG_WITH_PAGER is not set */
#define CFG_WITH_SOFTWARE_PRNG 1
#define CFG_WITH_STACK_CANARIES 1
#define CFG_WITH_STATS 1
/* CFG_WITH_STMM_SP is not set */
#define CFG_WITH_USER_TA 1
#define CFG_WITH_VFP 1
#define CFG_ZLIB 1
#define PLATFORM_FLAVOR qemu_armv8a
#define PLATFORM_FLAVOR_qemu_armv8a 1
#define PLATFORM_vexpress 1
#define _CFG_CORE_LTC_ACIPHER 1
#define _CFG_CORE_LTC_AES 1
/* _CFG_CORE_LTC_AES_ACCEL is not set */
#define _CFG_CORE_LTC_AES_DESC 1
#define _CFG_CORE_LTC_ASN1 1
#define _CFG_CORE_LTC_AUTHENC 1
#define _CFG_CORE_LTC_BIGNUM_MAX_BITS 4096
#define _CFG_CORE_LTC_CBC 1
#define _CFG_CORE_LTC_CBC_MAC 1
#define _CFG_CORE_LTC_CCM 1
/* _CFG_CORE_LTC_CE is not set */
#define _CFG_CORE_LTC_CIPHER 1
#define _CFG_CORE_LTC_CMAC 1
#define _CFG_CORE_LTC_CTR 1
#define _CFG_CORE_LTC_CTS 1
#define _CFG_CORE_LTC_DES 1
#define _CFG_CORE_LTC_DH 1
#define _CFG_CORE_LTC_DSA 1
#define _CFG_CORE_LTC_EC25519 1
#define _CFG_CORE_LTC_ECB 1
#define _CFG_CORE_LTC_ECC 1
#define _CFG_CORE_LTC_ED25519 1
#define _CFG_CORE_LTC_HASH 1
#define _CFG_CORE_LTC_HMAC 1
/* _CFG_CORE_LTC_HWSUPP_PMULL is not set */
#define _CFG_CORE_LTC_MAC 1
#define _CFG_CORE_LTC_MD5 1
#define _CFG_CORE_LTC_MPI 1
#define _CFG_CORE_LTC_OPTEE_THREAD 1
/* _CFG_CORE_LTC_PAGER is not set */
#define _CFG_CORE_LTC_RSA 1
#define _CFG_CORE_LTC_SHA1 1
/* _CFG_CORE_LTC_SHA1_ACCEL is not set */
#define _CFG_CORE_LTC_SHA224 1
#define _CFG_CORE_LTC_SHA256 1
/* _CFG_CORE_LTC_SHA256_ACCEL is not set */
#define _CFG_CORE_LTC_SHA256_DESC 1
#define _CFG_CORE_LTC_SHA384 1
#define _CFG_CORE_LTC_SHA384_DESC 1
#define _CFG_CORE_LTC_SHA512 1
#define _CFG_CORE_LTC_SHA512_256 1
#define _CFG_CORE_LTC_SHA512_DESC 1
#define _CFG_CORE_LTC_SIZE_OPTIMIZATION 1
#define _CFG_CORE_LTC_SM2_DSA 1
#define _CFG_CORE_LTC_SM2_KEP 1
#define _CFG_CORE_LTC_SM2_PKE 1
#define _CFG_CORE_LTC_VFP 1
#define _CFG_CORE_LTC_X25519 1
#define _CFG_CORE_LTC_XTS 1
#define _CFG_FTRACE_BUF_WHEN_FULL_shift 1
/* _CFG_USE_DTB_OVERLAY is not set */
#define _CFG_WITH_SECURE_STORAGE 1
#endif
