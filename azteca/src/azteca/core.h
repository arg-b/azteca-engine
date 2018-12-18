#pragma once

#ifdef AZ_PLATFORM_WINDOWS
	#ifdef AZ_BUILD_DLL
		#define AZTECA_API __declspec(dllexport)
	#else
		#define AZTECA_API __declspec(dllimport)
	#endif
#else
	#error azteca engine only supports Windows!
#endif