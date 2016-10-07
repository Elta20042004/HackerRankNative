// TestAmrFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "resource.h"
#include <windows.h>
#include <fstream>


int _tmain(int argc, _TCHAR* argv[])
{
	HRSRC myResource = ::FindResource(NULL, MAKEINTRESOURCE(IDR_AMR_BEEP), RT_RCDATA);
	unsigned int myResourceSize = ::SizeofResource(NULL, myResource);
    HGLOBAL myResourceData = ::LoadResource(NULL, myResource);
    void* pMyBinaryData = ::LockResource(myResourceData);
	

	std::ofstream f("C:\\Work\\08.bip\\x.bin", std::ios::out | std::ios::binary);
    f.write((char*)pMyBinaryData, myResourceSize);
    f.close();
	return 0;
}

