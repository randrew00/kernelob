# KMDF Kernel Hooking
- using WinAPI/Syscalls
- KMDF script hooking 
- Working hook implemented using function "NtOpenCompositionSurfaceDirtyRegion" within dxgkrnl.sys (vulnerable driver/functions encapsulated within)
- Needs further implementation to execute commands via user-mode application (prior to hooking)
- Working with UEFI firmware loader to get driver mapped before system boots completely (https://github.com/KunYi/Simple-UEFI-Bootloader)

**If use, build solution with the following** 

**-MSVS** 

**-WDK (https://learn.microsoft.com/en-us/windows-hardware/drivers/download-the-wdk)**

**-Spectre Mitigated Libraries**
