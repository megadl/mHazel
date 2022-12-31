#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declexport(dllexport)
	#else
		#define HAZEL_API __declexport(dllimport)
	#endif // HZ_BUILD_DLL
#else
	#error HAZEL only support Windows
#endif // HZ_PLATFORM_WINDOWS


