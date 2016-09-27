#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class solution {
public:
	bool isValidSerialization(const string & serTree) {
		vector<string> split;
		size_t begin = serTree.find_first_of("0123456789#", 0);
		size_t end = serTree.find_first_not_of("0123456789#", begin);
		while (begin != string::npos) {
			split.push_back(serTree.substr(begin, end-begin));
			begin = serTree.find_first_of("0123456789#", end);
			end = serTree.find_first_not_of("0123456789#", begin);
		}
		
		stack<string> st;
		size_t id = 0;
		if (!split[id].compare("#") && split.size() == 1)
			return true;
		else if (!split[id].compare("#") && split.size() > 1)
			return false;
		else {
			st.push(split[id]);
			id++;
			while (id < split.size()) {
				if (!st.top().compare("#"))
					st.push(split[id]);
				else {
				}
			}
		}
	}
};

int main() {
	string serTree{"9,3,4,#,#,1,#,#,2,#,6,#,#"};
}
