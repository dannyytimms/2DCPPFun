#include <cstdarg>
#include <stdio.h>
#include <windows.h>
#include "Debugging.h"

namespace Utilities
{
	void Debugging::DebugLog(const char* msg, ...)
	{
		char temp[4096];

		va_list ap;
		va_start(ap, msg);
		vsnprintf_s(temp, 4096 - 1, msg, ap);
		va_end(ap);

		OutputDebugStringA(temp);
	}
}
