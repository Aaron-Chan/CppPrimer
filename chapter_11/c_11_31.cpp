


#include <iostream>
#include <map>
#include <string>
#include <vector>
using std::vector;
using std::multimap;
using std::string;
using std::endl;
using std::cout;

int deleteValue(multimap<string, string> &map_ref, const string &author) {
	int count = map_ref.count(author);
	if (map_ref.find(author) != map_ref.end()) {
		auto it = map_ref.find(author);
		map_ref.erase(it);
	}
	return count;
}

int main()
{
	multimap<string, string> author_works;
	author_works.insert({ "mike","book1" });
	author_works.insert({ "mike","book2" });
	author_works.insert({ "aaron","a1" });
	author_works.insert({ "aaron","ad" });
	author_works.insert({ "aaron","ab" });
	for (auto &it : author_works) {
		cout << "author " << it.first << " work " << it.second << endl;
	}

	cout << deleteValue(author_works, "mike") << endl;
	cout << deleteValue(author_works, "jane") << endl;

}