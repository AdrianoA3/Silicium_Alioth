##
#  Copyright (c) 2011 - 2022, ARM Limited. All rights reserved.
#  Copyright (c) 2014, Linaro Limited. All rights reserved.
#  Copyright (c) 2015 - 2020, Intel Corporation. All rights reserved.
#  Copyright (c) 2018, Bingxing Wang. All rights reserved.
#  Copyright (c) Microsoft Corporation.
#
#  SPDX-License-Identifier: BSD-2-Clause-Patent
##

[Defines]
  # GIC
  USE_CUSTOM_GIC                             = 0

  # Timer
  USE_CUSTOM_TIMER                           = 0
  USE_PHYSICAL_TIMER                         = 0

  # KEP
  ENABLE_KEP                                 = 0
  HAS_ACTLR_EL1_UNIMPLEMENTED_ERRATA         = 0
  HAS_AMCNTENSET0_EL0_UNIMPLEMENTED_ERRATA   = 0
  HAS_GIC_V3_WITHOUT_IRM_FLAG_SUPPORT_ERRATA = 0
  HAS_PSCI_MEMPROTECT_FAILING_ERRATA         = 0

[BuildOptions]
  *_*_AARCH64_CC_FLAGS = -march=armv8-a+crypto+rcpc

[PcdsFixedAtBuild]
  # Timer
  gArmTokenSpaceGuid.PcdArmArchTimerFreqInHz|26000000
  gArmTokenSpaceGuid.PcdArmArchTimerSecIntrNum|29
  gArmTokenSpaceGuid.PcdArmArchTimerIntrNum|30
  gArmTokenSpaceGuid.PcdArmArchTimerVirtIntrNum|27
  gArmTokenSpaceGuid.PcdArmArchTimerHypIntrNum|26

  # GIC
  gArmTokenSpaceGuid.PcdGicDistributorBase|0x104E0000
  gArmTokenSpaceGuid.PcdGicRedistributorsBase|0x104E2000
  gArmTokenSpaceGuid.PcdGicInterruptInterfaceBase|0x104E2000

  # SmBios
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorModel|"Exynos (TM) 7870 @ 1.60 GHz"
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosProcessorPartNumber|"S5E7870"

  # CPU
  gArmPlatformTokenSpaceGuid.PcdCoreCount|8
  gArmPlatformTokenSpaceGuid.PcdClusterCount|2
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMaxCpuFreq|1600

  # CPU Caches (Unoffical Values)
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1InstCacheSize|0x100
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel1DataCacheSize|0x100
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosLevel2CacheSize|0x200

  # Memory Speed & Type
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemorySpeed|933    # Unoffical Value
  gSiliciumPkgTokenSpaceGuid.PcdSmbiosMemoryType|29

  # DDR Info (Unknown)
  gSamsungPkgTokenSpaceGuid.PcdDdrInfoOffset|0x0
  gSamsungPkgTokenSpaceGuid.PcdDdrSizeInfoOffset|0x0

[LibraryClasses]
  PlatformPrePiLib|S5E7870Pkg/Library/PlatformPrePiLib/PlatformPrePiLib.inf
  AcpiPlatformUpdateLib|SiliciumPkg/Library/AcpiPlatformUpdateLibNull/AcpiPlatformUpdateLibNull.inf
  HwResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  ResetSystemLib|ArmPkg/Library/ArmSmcPsciResetSystemLib/ArmSmcPsciResetSystemLib.inf
  SoCPlatformLib|S5E7870Pkg/Library/SoCPlatformLib/SoCPlatformLib.inf

[Components]
  SamsungPkg/Drivers/SmBiosTableDxe/SmBiosTableDxe.inf
  S5E7870Pkg/Drivers/MshcDxe/MshcDxe.inf

!include SamsungPkg/SamsungPkg.dsc.inc
