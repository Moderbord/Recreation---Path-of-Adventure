#include "pch.h"


GameWindow::GameWindow()
{
	_window_tab[0] = WindowTab("Menu");
	_window_tab[1] = WindowTab("Character");
	_window_tab[2] = WindowTab("Inventory");
	_window_tab[3] = WindowTab("Story");
}

WindowTab GameWindow::get_tab(const int tab_number)
{
	switch (tab_number)
	{
	case MENU:
		return _window_tab[0];
		break;
	case CHARACTER:
		return _window_tab[1];
		break;
	case INVENTORY:
		return _window_tab[2];
		break;
	case STORY:
		return _window_tab[3];
		break;
	default:
		std::cout << "\n\nERROR - No tab returned!\n\n";
		break;
	}
}

void GameWindow::print_tabs()
{
	char i = 65;
	for (WindowTab &tab : _window_tab)
	{
		cout << i << ". " << tab.get_name() << "\t\t";
		i++;
	}
	cout << "\n\n";
}

void GameWindow::clear()
{
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
