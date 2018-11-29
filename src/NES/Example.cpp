//� 2018 NIREX ALL RIGHTS RESERVED

// Pipeline Guidelines:
// A: A0 and A1 are free to use and your go-to methods when you want a fast and lite encryption.
// B: Do not use B1 when encrypting your data, it will corrupt it.
//	: B1 is only meant for decryption.
// C: Do not use C1 when encrypting your data, it will corrupt it
//	: C1 is only meant of decryption.

#include "Precompiled.h"
#include "NES.h"
#include "NString.h"
#include "NPattern.h"

#include <iostream>

#include "NWin.h"
#include "NTime.h"

FILL main(NINT argc, NStrArray argv) -> NINT
{
	while (true)
	{
		UNREFERENCED_PARAMETER(argc);
		UNREFERENCED_PARAMETER(argv);

		std::string szText;
		std::string szKey;
		std::string szEncrypted;
		std::string szEncrypted01;
		std::string szEncrypted02;
		std::string szEncrypted03;

		std::string szDecrypted;
		std::string szDecrypted01;
		std::string szDecrypted02;
		std::string szDecrypted03;

		COUT << "Text: ";
		LINE(CIN, szText);

		COUT << "Key: ";
		LINE(CIN, szKey);

		COUT << ENDL;

		szEncrypted = NES::NESA0(szText, szKey);
		Sleep(10);
		szEncrypted01 = NES::NESA0(szText, szKey);
		Sleep(10);
		szEncrypted02 = NES::NESA0(szText, szKey);
		Sleep(10);
		szEncrypted03 = NES::NESA0(szText, szKey);
		szDecrypted = NES::NESA1(szEncrypted, szKey);
		szDecrypted01 = NES::NESA1(szEncrypted01, szKey);
		szDecrypted02 = NES::NESA1(szEncrypted02, szKey);
		szDecrypted03 = NES::NESA1(szEncrypted03, szKey);

		COUT << "Encrypted(A_00): ";
		COUT << szEncrypted << ENDL;
		COUT << "Encrypted(A_01): ";
		COUT << szEncrypted01 << ENDL;
		COUT << "Encrypted(A_02): ";
		COUT << szEncrypted02 << ENDL;
		COUT << "Encrypted(A_03): ";
		COUT << szEncrypted03 << ENDL;

		COUT << ENDL;

		COUT << "Decrypted(A_00): ";
		COUT << szDecrypted << ENDL;
		COUT << "Decrypted(A_01): ";
		COUT << szDecrypted01 << ENDL;
		COUT << "Decrypted(A_02): ";
		COUT << szDecrypted02 << ENDL;
		COUT << "Decrypted(A_03): ";
		COUT << szDecrypted03 << ENDL;
		COUT << ENDL;

		szEncrypted = NES::NESB0(szText, szKey);
		Sleep(10);
		szEncrypted01 = NES::NESB0(szText, szKey);
		Sleep(10);
		szEncrypted02 = NES::NESB0(szText, szKey);
		Sleep(10);
		szEncrypted03 = NES::NESB0(szText, szKey);
		szDecrypted = NES::NESB1(szEncrypted, szKey);
		szDecrypted01 = NES::NESB1(szEncrypted01, szKey);
		szDecrypted02 = NES::NESB1(szEncrypted02, szKey);
		szDecrypted03 = NES::NESB1(szEncrypted03, szKey);


		COUT << "Encrypted(B_00): ";
		COUT << szEncrypted << ENDL;
		COUT << "Encrypted(B_01): ";
		COUT << szEncrypted01 << ENDL;
		COUT << "Encrypted(B_02): ";
		COUT << szEncrypted02 << ENDL;
		COUT << "Encrypted(B_03): ";
		COUT << szEncrypted03 << ENDL;

		COUT << ENDL;

		COUT << "Decrypted(B_00): ";
		COUT << szDecrypted << ENDL;
		COUT << "Decrypted(B_01): ";
		COUT << szDecrypted01 << ENDL;
		COUT << "Decrypted(B_02): ";
		COUT << szDecrypted02 << ENDL;
		COUT << "Decrypted(B_03): ";
		COUT << szDecrypted03 << ENDL;
		COUT << ENDL;

		szEncrypted = NES::NESC0(szText, szKey);
		Sleep(10);
		szEncrypted01 = NES::NESC0(szText, szKey);
		Sleep(10);
		szEncrypted02 = NES::NESC0(szText, szKey);
		Sleep(10);
		szEncrypted03 = NES::NESC0(szText, szKey);
		szDecrypted = NES::NESC1(szEncrypted, szKey);
		szDecrypted01 = NES::NESC1(szEncrypted01, szKey);
		szDecrypted02 = NES::NESC1(szEncrypted02, szKey);
		szDecrypted03 = NES::NESC1(szEncrypted03, szKey);

		COUT << "Encrypted(C_00): ";
		COUT << szEncrypted << ENDL;
		COUT << "Encrypted(C_01): ";
		COUT << szEncrypted01 << ENDL;
		COUT << "Encrypted(C_02): ";
		COUT << szEncrypted02 << ENDL;
		COUT << "Encrypted(C_03): ";
		COUT << szEncrypted03 << ENDL;

		COUT << ENDL;

		COUT << "Decrypted(C_00): ";
		COUT << szDecrypted << ENDL;
		COUT << "Decrypted(C_01): ";
		COUT << szDecrypted01 << ENDL;
		COUT << "Decrypted(C_02): ";
		COUT << szDecrypted02 << ENDL;
		COUT << "Decrypted(C_03): ";
		COUT << szDecrypted03 << ENDL;
		COUT << ENDL;
		COUT << ENDL;
	}
	return S_OK;
}