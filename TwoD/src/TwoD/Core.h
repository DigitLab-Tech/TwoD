#pragma once

#ifdef DD_PLATFORM_WINDOWS
	#ifdef DD_DLLING
		#define DD __declspec(dllexport) 
	#else
		#define DD __declspec(dllimport)
	#endif
#else
	#error Only supporting Windows
#endif