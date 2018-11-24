#include "NPatern.h"
#include "NFile.h"
#include "NString.h"
#include "NES.h"

bool NPatern::Load(std::string path)
{
	m_paterns = NFile::ReadAllLines(path);
	for (auto& p : m_paterns)
	{
		if (p != "A0" &&
			p != "A1" &&
			p != "B0" &&
			p != "B1" &&
			p != "C0" &&
			p != "C1")
		{
			// Bad Pattern file
			return false; 
		}
	}
	return true;
}

std::string NPatern::Text_Perfom(std::string text, std::string key)
{
	std::string intext = text;
	for (auto& p : m_paterns)
	{
		if (p == "TA0")
		{
			intext = NES::TEXT_NESA0(intext, key);
		}
		else if (p == "TA1")
		{
			intext = NES::TEXT_NESA1(intext, key);
		}
		else if (p == "TB0")
		{
			intext = NES::TEXT_NESB0(intext, key);
		}
		else if (p == "TB1")
		{
			intext = NES::TEXT_NESB1(intext, key);
		}
		else if (p == "TC0")
		{
			intext = NES::TEXT_NESC0(intext, key);
		}
		else if (p == "TC1")
		{
			intext = NES::TEXT_NESC1(intext, key);
		}
	}
	return intext;
}

std::vector<char> NPatern::Data_Perform(std::vector<char> data, std::string key)
{
	std::vector<char> indata;
	for (auto& p : m_paterns)
	{
		if (p == "DA0")
		{
			indata = NES::DATA_NESA0(indata, key);
		}
		else if (p == "DA1")
		{
			indata = NES::DATA_NESA1(indata, key);
		}
		else if (p == "DB0")
		{
			indata = NES::DATA_NESB0(indata, key);
		}
		else if (p == "DB1")
		{
			indata = NES::DATA_NESB1(indata, key);
		}
		else if (p == "DC0")
		{
			indata = NES::DATA_NESC0(indata, key);
		}
		else if (p == "DC1")
		{
			indata = NES::DATA_NESC1(indata, key);
		}
	}
	return indata;
}
