#include "User.h"
#include "DeviceList.h"

/*
Input:id username age
Output:None
Creates new User type object
*/
void User::init(const unsigned int id, const std::string username, const unsigned int age)
{
	this->_id = id;
	this->_username = username;
	this->_age = age;
	this->_devices.init();
}

/*
Input:None
Output:None
Clears a User type object
*/
void User::clear()
{
	this->_id = 0;
	this->_username = "";
	this->_age = 0;
	this->_devices.clear();
}

//Start of getters
unsigned int User::getID() const
{
	return this->_id;
}


std::string User::getUserName() const
{
	return this->_username;
}


unsigned int User::getAge() const
{
	return this->_age;
}


DevicesList& User::getDevices()
{
	return this->_devices;
}
//end of getters


/*
Input:newDevice
adds a device to the device list of a user
*/
void User::addDevice(const Device newDevice)
{
	this->_devices.add(newDevice);
}

/*
Output: T/F
func checks if all devices of a user are active
*/
bool User::checkIfDevicesAreOn() const
{
	DevicesList deviceList = this->_devices;
	DeviceNode* currentNode = deviceList.get_first();

	while (currentNode != NULL)
	{
		if (!currentNode->get_data().isActive())
		{

			return false;
		}
		currentNode = currentNode->get_next();
	}

	return true;
}
