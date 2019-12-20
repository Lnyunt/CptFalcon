/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "ctre/Phoenix.h"
#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <string>

namespace frc973 {

// Talon and Victor Can ID's
constexpr int LEFT_TALON_A_CANID = 1;  // deviceNumber
constexpr int LEFT_VICTOR_B_CANID = 2; // deviceNumber
constexpr int LEFT_VICTOR_C_CANID = 3; // deviceNumber

constexpr int RIGHT_TALON_A_CANID = 16;  // deviceNumber
constexpr int RIGHT_VICTOR_B_CANID = 15; // deviceNumber
constexpr int RIGHT_VICTOR_C_CANID = 14; // deviceNumber

class Robot : public frc::TimedRobot {
public:
  Robot();
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;

private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;

  TalonSRX *m_leftTalonA{new TalonSRX(LEFT_TALON_A_CANID)};
  VictorSPX *m_leftVictorB{new VictorSPX(LEFT_VICTOR_B_CANID)};
  VictorSPX *m_leftVictorC{new VictorSPX(LEFT_VICTOR_C_CANID)};

  TalonSRX *m_rightTalonA{new TalonSRX(RIGHT_TALON_A_CANID)};
  VictorSPX *m_rightVictorB{new VictorSPX(RIGHT_VICTOR_B_CANID)};
  VictorSPX *m_rightVictorC{new VictorSPX(RIGHT_VICTOR_C_CANID)};
};
} // namespace frc973
