#include "Device.h"

void Device::activate()
{
    this->_active = true;
}

void Device::deactivate()
{
    this->_active = false;
}

void Device::init(const unsigned int id, const DeviceType type, const std::string OS)
{
    this->_id = id;
    this->_type = type;
    this->_OS = OS;
    this->activate();
}

bool Device::isActive() const
{
    return this->_active;
}

unsigned int Device::getID() const
{
    return this->_id;
}

DeviceType Device::getType() const
{
    return this->_type;
}

std::string Device::getOS() const
{
    return this->_OS;
}
