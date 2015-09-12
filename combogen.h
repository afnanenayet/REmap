#pragma once
#include <vector>
#include <string>
class combogen
{
public:
	std::vector < std::vector <std::string> > findCombos(std::vector <std::string>&);
    
private:
	std::vector < std::vector <std::string> > permutations_vector;
    void recurse(int, int, std::vector<std::string>&);
	int name_size;
	std::vector <std::string> names_perm;
	std::vector <std::string> row;
};

