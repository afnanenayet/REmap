#include "combogen.h"
#include <string>

using namespace std;
std::vector < std::vector <std::string> > combogen::findCombos(std::vector<std::string>& names_vector)
{
	
    name_size = int (names_vector.size()); //explicitly casting size (long) as a normal integer
	for (auto i = 0; i < name_size; ++i) {
		names_perm.push_back(names_vector.at(i));
	}
	
	for (auto i = 1; i <= name_size; ++i) {
		recurse(0, i, names_vector);
	}
	return permutations_vector;
}
	

void combogen::recurse(int offset, int perm_count, vector<std::string>& ref_vector) //gets permutations of vector with k possibilities
{
	if (perm_count == 0) {
		permutations_vector.push_back(row);
		return;
	}

	for (int i = offset; i <= name_size - perm_count; ++i) {
		row.push_back(ref_vector.at(i));
		recurse(i + 1, perm_count - 1, ref_vector);
		row.pop_back();
	}
}


