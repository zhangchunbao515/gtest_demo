#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP 1

#include <string>
#include <unordered_map>


namespace gmock_sample
{

class phone_book {
public:
	/**
	 * Checks if phone book contains any entries.
	 */
	bool empty() const;

	void insert(const std::string& name, const std::string& phone_nr);

	/**
	 * @return phone book entry count.
	 */
	size_t size() const;

	/**
	 * @throws exception if contact with the specified name is not found.
	 *	Use has_nr() before calling this method.
	 * @return phone number of the specified contact.
	 */
	std::string get_nr(const std::string& name) const;

	/**
	 * Checks if phone book contains number for the specified contact."
	 */
	bool has_nr(const std::string& name) const;

private:
	std::unordered_map<std::string, std::string> numbers_;
};

} // gmock-sample

#endif /* PHONE_BOOK_HPP */
