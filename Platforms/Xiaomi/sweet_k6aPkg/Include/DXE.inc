  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/SmemDxe/SmemDxe.inf

  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/sweet_k6a/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/sweet_k6a/QcomPkg/Drivers/PdcDxe/PdcDxe.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/AW8624Dxe/AW8624Dxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/VibratorDxe/VibratorDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/sweet_k6a/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/sweet_k6a/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/RNGDxe/RngDxe.inf

  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/sweet_k6a/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/sweet_k6a/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
