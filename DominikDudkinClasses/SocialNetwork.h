#pragma once

#include <string>
#include "ProfileList.h"
#include "Profile.h"

class SocialNetwork 
{
public:

	void init(const std::string networkName, const int minAge);

	void clear();

	std::string getNetworkName() const;

	int getMinAge() const;

	bool addProfile(Profile profile_to_add) const;

	std::string getWindowsDevices() const;

private:
	std::string _networkName;
	int _minAge;
	ProfileList _networkProfiles;

};
