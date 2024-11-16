#pragma once

#include <string>

#include "User.h"
#include "Page.h"
#include "UserList.h"

#define CHECKPOINT "\n***********\n**********\n"

class Profile
{
public:

	void init(const User owner);
	void clear();
	User getOwner() const;
	void setStatus(const std::string new_status);
	void addPostToProfilePage(const std::string post);
	void addFriend(const User friend_to_add);
	std::string getPage() const;
	std::string getFriends() const;
	std::string getFriendsWithSameNameLength() const;
	



private:

	User _owner;
	Page _page;
	UserList _friendsList;
};

