#include <iostream>
#include <string>
#include "Profile.h"
#include "UserList.h"



void Profile::init(const User owner)
{
	this->_owner = owner;
	this->_page.init();
	this->_friendList.init();
}

void Profile::clear()
{
	this->_page.clearPage();
	this->_friendList.clear();
}

User Profile::getOwner() const
{
	return this->_owner;
}

void Profile::setStatus(const std::string new_status)
{
	this->_page.setStatus(new_status);
}


void Profile::addPostToProfilePage(const std::string post)
{
	this->_page.addLineToPosts(post);
}


void Profile::addFriend(const User friend_to_add)
{
	this->_friendList.add(friend_to_add);
}

std::string Profile::getPage() const
{
	return "Status: " + this->_page.getStatus() + CHECKPOINT + this->_page.getPosts();
}

std::string getFriends() 
{
	UserList FriendsList = this->_friendsList;
	UserNode* currentNode = FriendsList.get_first();
	std::string res = "";

	while (currentNode)
	{
		res += currentNode->get_data()->getUserName() + ",";
		currentNode = currentNode->get_next()
	}

	return res;
}
