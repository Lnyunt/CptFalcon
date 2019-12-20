#include "subsystems/Drive.h"

namespace frc973 {

Drive::Drive(TalonSRX *leftTalonA, TalonSRX *rightTalonA,
             VictorSPX *leftVictorB, VictorSPX *rightVictorB,
             VictorSPX *leftVictorC, VictorSPX *rightVictorC)
    : m_leftTalonA(leftTalonA), m_rightTalonA(rightTalonA),
      m_leftVictorB(leftVictorB), m_rightVictorB(rightVictorB),
      m_leftVictorC(leftVictorC), m_rightVictorC(rightVictorC)

{
  m_leftTalonA->ConfigFactoryDefault();
  m_rightTalonA->ConfigFactoryDefault();

  m_leftVictorB->ConfigFactoryDefault();
  m_rightVictorB->ConfigFactoryDefault();
  m_leftVictorC->ConfigFactoryDefault();
  m_rightVictorC->ConfigFactoryDefault();
}
Drive::~Drive() {}
} // namespace frc973