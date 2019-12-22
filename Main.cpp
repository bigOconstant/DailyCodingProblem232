#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

class PrefixMapSum {
private:
	std::map<std::string, int> mapset;

public:
	void insert(std::string first,int second) {
		mapset.insert({ first,second });
	}

	int sum(std::string const& value) {
		int sum = 0;
		for (auto it = mapset.begin(); it != mapset.end(); ++it) {
			if ((*it).first.find(value) != std::string::npos) {
				sum += (*it).second;
			}
		}
		return sum;
	}

};


int main() {
	std::cout << "hello world" << std::endl;
	auto mapsum = PrefixMapSum();
	mapsum.insert("columnar", 3);
	std::cout << "total:" << mapsum.sum("col") << std::endl;
	mapsum.insert("column", 2);
	mapsum.insert("column", 2);
	std::cout << "total:" << mapsum.sum("col") << std::endl;
}