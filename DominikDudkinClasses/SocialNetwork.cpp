#include <string>
#include "Device.h"
#include "User.h"
#include "Page.h"
#include "Profile.h"
#include "ProfileList.h"
#include "DeviceList.h"
#include "SocialNetwork.h"

void SocialNetwork::init(const std::string networkName, const int minAge)
{
	this->_networkName = networkName;
	this->_minAge = minAge;
	this->_networkProfiles.init();
}

void clear() 
{
	this->_networkName = "";
	this->_minAge = 0;
	this->_networkProfiles.clear();
}

std::string getNetworkName() 
{
	return this->_networkName;
}

int getMinAge() 
{
	return this->_minAge;
}


bool addProfile(Profile profile_to_add)
{
	return ProfileList::add(profile_to_add);
}



