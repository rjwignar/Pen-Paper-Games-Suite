#define _CRT_SECURE_NO_WARNINGS //remove later
#include "paperGames.h"

namespace project
{
	char* PaperGame::title() const
	{
		return m_title;
	}
	PaperGame::PaperGame()
	{
		m_title = nullptr;
	}
	PaperGame::PaperGame(const char* cstr)
	{
		m_title = new char[std::strlen(cstr) + 1];
		strcpy(m_title, cstr);
	}
	PaperGame::~PaperGame()
	{
		delete[] m_title;
		m_title = nullptr;
	}
	std::ostream& operator<<(std::ostream& os, const PaperGame& game)
	{
		game.drawBoard(os);
		return os;
	}
}