#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS
	#ifdef ENGINE_BUILD_DLL
		#define ENGINE_API __declspec(dllexport)
	#else
		#define ENGINE_API __declspec(dllimport)
	#endif // ENGINE_BUILD_DLL
#else
	#error GameEngine only supports Windows!
#endif

#define BIT(x) (1 << x)