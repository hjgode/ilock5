//ver_info.h

#include "stdafx.h"

BOOL myGetFileVersionInfo(HMODULE hLib, TCHAR* szVersion);
BOOL myGetFileVersionInfo(TCHAR* szVersion);

BOOL myGetProductVersionInfo(HMODULE hLib, TCHAR* szVersion);
BOOL myGetProductVersionInfo(TCHAR* szVersion);

BOOL myGetFileProductNameInfo(HMODULE hLib, TCHAR* szVersion);
BOOL myGetFileProductNameInfo(TCHAR* szVersion);

