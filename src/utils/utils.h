#pragma once

#include "console.h"
#include "memory.h"
#include "platform.h"

namespace utils {
	__forceinline std::string ssprintf(const char *fmt, ...) {
		va_list ap1, ap2;
		va_start(ap1, fmt);
		va_copy(ap2, ap1);
		size_t sz = vsnprintf(NULL, 0, fmt, ap1) + 1;
		va_end(ap1);
		char *buf = (char *)malloc(sz);
		vsnprintf(buf, sz, fmt, ap2);
		va_end(ap2);
		std::string str(buf);
		free(buf);
		return str;
	}
}  // namespace utils

#define delete_ptr(ptr) \
	if (ptr) {             \
		delete ptr;           \
		ptr = nullptr;        \
	}