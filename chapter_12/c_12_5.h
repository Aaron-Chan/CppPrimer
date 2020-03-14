

#ifndef cp_c12_5_h
#define cp_c12_5_h
#include <string>
#include <memory>
#include <vector>
#include <initializer_list>
#include <exception>
class StrBlob{

    public:
	using size_type = std::vector<std::string>::size_type;
    StrBlob();
	explicit StrBlob(std::initializer_list<std::string> li);
	size_type size() const {
		return data->size();
	}
	bool empty() const { return data->empty(); };
    void push_back(const std::string &str);
	void pop_back();
	std::string& front();
	std::string& back();
	const std::string& back() const;
	const std::string& front() const;

    private:
    std::shared_ptr<std::vector<std::string>> data;
	void check_size(size_type idx,const std::string &msg)const;
};

StrBlob::StrBlob() :data(std::make_shared<std::vector<std::string>>()) {
};


StrBlob::StrBlob(std::initializer_list<std::string> li):data(std::make_shared<std::vector<std::string>>(li)) {
}

void StrBlob::check_size(size_type idx, const std::string& msg) const {
	if (idx >= data->size()) {
		throw std::out_of_range(msg);
	}
}

void StrBlob::push_back(const std::string& str) {
	data->push_back(str);
}

void StrBlob::pop_back() {
	check_size(0, "pop back on empty");
	data->pop_back();
}
std::string& StrBlob::front() {
	check_size(0, "front on empty");
	return data->front();
}

std::string& StrBlob::back() {
	check_size(0, "back on empty");
	return data->back();
}

const std::string& StrBlob::front() const {
	check_size(0, "front on empty");
	return data->front();
}


const std::string& StrBlob::back()const {
	check_size(0, "back on empty");
	return data->back();
}

#endif