#include <Geode/Geode.hpp>
#include <Geode/modify/PlayerObject.hpp>

using namespace geode::prelude;
class $modify(PlayerObject) {

 void updateJump(float p0){
    if (this->m_vehicleSize == 0.6f)
    {
    this->m_vehicleSize = 1.4f;
    this->m_gravity = 1.1f;
    }
    return PlayerObject::updateJump(p0);
   }
};
