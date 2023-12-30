#pragma once
#include "Input.h"

class Engine {
public:

	Input e_Input;
	bool running = true;
	std::string input_text;

	void Update()
	{
		while (running)
		{
			std::cout << "What would you like to do?\n";
			std::getline(cin, input_text);
			e_Input.get_cmd(input_text);
			input_text.clear();
		};
	};

protected:

private:


};
