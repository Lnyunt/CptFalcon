#pragma once

#include "ctre/Phoenix.h"

namespace frc973 {
class Drive {
public:
  Drive(TalonSRX *leftTalonA, TalonSRX *rightTalonA, VictorSPX *leftVictorB,
        VictorSPX *rightVictorB, VictorSPX *leftVictorC,
        VictorSPX *rightVictorC);

  virtual ~Drive();

  void DrivePeriodic();

private:
  TalonSRX *m_leftTalonA;
  TalonSRX *m_rightTalonA;

  VictorSPX *m_leftVictorB;
  VictorSPX *m_rightVictorB;
  VictorSPX *m_leftVictorC;
  VictorSPX *m_rightVictorC;
};
} // namespace frc973