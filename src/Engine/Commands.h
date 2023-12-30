#pragma once
#include <string>
#include <vector>
#include <cctype>
#include <map>
#include <iostream>
#include <any>

using namespace std;
enum Commands {
	spawn,
	kill,
	search,
	select
};



class CommandList {
public:
	Commands c;
	map<string, Commands> L;
	CommandList() {
		L["make"]		= spawn;
		L["spawn"]		= spawn;
		L["make"]		= spawn;

		L["kill"]		= kill;
		L["despawn"]	= kill;
		L["unalive"]	= kill;

		L["search"]		= search;
		L["find"]		= search;

		L["select"] = select;
		
	}

	void GetCommand(std::string cmd)
	{
		correct_input(cmd);
		cout << cmd << endl;
	}

private:


	void ClearSequence()
	{
		cmd_sequence.clear();
	}

	void Spawn();


};