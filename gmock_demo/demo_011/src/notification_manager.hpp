#ifndef NOTIFICATION_MANAGER_HPP
#define NOTIFICATION_MANAGER_HPP 1

#include <string>
#include <cstddef>
#include <memory>


namespace gmock_sample
{

class notifier {
public:
	virtual ~notifier() {}
	virtual void exec(const std::string& message) = 0;
};


/**
 * Notification manager accepts various notification messages, caches them
 * and dispatches on demand.
 */
class notification_manager {
public:
	notification_manager(std::shared_ptr<notifier> _notifier);

	bool has_notifications() const;

	void add(const std::string& notification);

	std::size_t notification_count() const;

	/**
	 * Dispatches all notifications and clears the list.
	 */
	void notify();

private:
	std::size_t notification_count_ = 0;
	std::shared_ptr<notifier> notifier_;
};

}

#endif /* NOTIFICATION_MANAGER_HPP */
