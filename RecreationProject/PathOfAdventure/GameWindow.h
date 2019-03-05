#pragma once
#include "WindowTab.h"


class GameWindow
{
private:
	WindowTab _window_tab[4];
public:
	GameWindow();
	~GameWindow() = default;

	enum tab_number{MENU, CHARACTER, INVENTORY, STORY};
	WindowTab get_tab(int tab_number);
	void print_tabs();
	void clear();
};

