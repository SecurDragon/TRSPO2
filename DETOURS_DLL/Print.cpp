#include "Print.h"
#include <stdarg.h>
#include <stdio.h>
#include <time.h>
#include "SMHelper.h"

void _Print(const char* fmt, ...) {
	if (info->function[0] == 0)
		return;
	if (fmt[0] == '!' || strncmp(fmt, info->function, strlen(info->function)) == 0) {
		unsigned writeIdx = InterlockedExchangeAdd(&info->writeEntryIdx, 0);
		unsigned new_idx = (writeIdx + 1) % MAX_ENTRIES;

		time_t now;
		time(&now);
		info->entries[new_idx].callTime = now;

		va_list args;
		va_start(args, fmt);
		int res = vsprintf_s(info->entries[new_idx].functionCall, BUFFER_SIZE, fmt, args);
		va_end(args);
		if (res >= 0) {
			info->entries[new_idx].functionCall[res] = 0;
			if (info->entries[new_idx].functionCall[res - 1] == '\n')
				info->entries[new_idx].functionCall[res - 1] = 0;
		}
		InterlockedExchange(&info->writeEntryIdx, new_idx);
		Real_SetEvent(event);
	}
}