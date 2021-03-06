#include "pch.h"

// Constructor
GameWindow::GameWindow()
{
	_window_tab[0] = new WindowTab("Menu");
	_window_tab[1] = new WindowTab("Character");
	_window_tab[2] = new WindowTab("Inventory");
	_window_tab[3] = new WindowTab("Story");
}

// Returns game tab
WindowTab* GameWindow::get_tab(const int tab_number)
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

// Prints game tabs at the top of the console
void GameWindow::print_tabs()
{
	char i = 65;
	for (WindowTab *tab : _window_tab)
	{
		cout << i << ". \b" << tab->get_name() << "\b\t\t";
		i++;
	}
	cout << "\n\n";
}

// Clears the console of previous text
void GameWindow::clear()
{
	system("CLS");
}
