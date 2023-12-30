#pragma once
#include <string>
#include <vector>
#include "Commands.h"
#include <list>

class Input {
public:
	void get_cmd(std::string in) {
		cmd = in;
		ParseCommand(cmd);
	};
	
private:
	std::string cmd;
	CommandList cmds;

	void ParseCommand(std::string& command)
	{
		cmds.GetCommand(command);
	}

	std::vector<string> cmd_sequence;

	void correct_input(std::string& input)
	{
		for (int i = 0; i < input.length(); i++)
		{
			if (isupper(input[i])) { input[i] += 32; };
			if (ispunct(input[i])) { input.erase(i, i + 1); };

		}
		cmd = input;
	}

	void read_input()
	{
		while (!cmd.empty())
		{
			cmd.find(' ');
			cmd_sequence.back();
			cmd_sequence.emplace_back()
		}
	}
};