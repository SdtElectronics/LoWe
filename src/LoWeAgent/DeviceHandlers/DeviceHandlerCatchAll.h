#pragma once

#include "DeviceHandler.h"

class DeviceHandlerCatchAll : public DeviceHandler
{
	public:
		DeviceHandlerCatchAll(const pid_t pid, const string path);

		virtual bool IsDeviceAvailable() override;
		virtual string GetFixupScript() const override;
		virtual void ExecuteBefore(pid_t pid, const long syscall, user_regs_struct &regs) override;
		virtual void ExecuteAfter(pid_t pid, const long syscall, user_regs_struct &regs) override;

	private:
		long _ioctlop;
		long _ioctladdr;

};
