#include "hook.h"

extern "C" NTSTATUS DriverEntry(PDRIVER_OBJECT driver_object, PUNICODE_STRING reg_path)
{
	UNREFERENCED_PARAMETER(driver_object);
	UNREFERENCED_PARAMETER(reg_path);

	nullhook::call_kernel_function(&nullhook::hook_handler);

	if (nullhook::call_kernel_function(&nullhook::hook_handler)) {
		DbgPrintEx(0, 0, "Driver Loaded!\n");
		return STATUS_SUCCESS;
	}
	else {
		DbgPrintEx(0, 0, "Function Hook Failed!\n");
		return STATUS_FAILED_DRIVER_ENTRY;

	}

	return STATUS_SUCCESS;
}