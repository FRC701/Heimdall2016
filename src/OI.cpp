// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/MecanumDrive.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    coDriver.reset(new Joystick(1));
    
    coLGreen.reset(new JoystickButton(coDriver.get(), 15));
    coLGreen->WhileHeld(new AutonomousCommand());
    coLRed.reset(new JoystickButton(coDriver.get(), 12));
    coLRed->WhileHeld(new AutonomousCommand());
    coLBlack.reset(new JoystickButton(coDriver.get(), 8));
    coLBlack->WhileHeld(new AutonomousCommand());
    coLWhite.reset(new JoystickButton(coDriver.get(), 13));
    coLWhite->WhileHeld(new AutonomousCommand());
    coLBlue.reset(new JoystickButton(coDriver.get(), 9));
    coLBlue->WhileHeld(new AutonomousCommand());
    coRGreen.reset(new JoystickButton(coDriver.get(), 4));
    coRGreen->WhileHeld(new AutonomousCommand());
    coRBlack.reset(new JoystickButton(coDriver.get(), 3));
    coRBlack->WhileHeld(new AutonomousCommand());
    coRRed.reset(new JoystickButton(coDriver.get(), 1));
    coRRed->WhileHeld(new AutonomousCommand());
    coRYellow.reset(new JoystickButton(coDriver.get(), 2));
    coRYellow->WhileHeld(new AutonomousCommand());
    coButtonStart.reset(new JoystickButton(coDriver.get(), 8));
    coButtonStart->WhileHeld(new AutonomousCommand());
    coButtonBack.reset(new JoystickButton(coDriver.get(), 7));
    coButtonBack->WhileHeld(new AutonomousCommand());
    coButtonRB.reset(new JoystickButton(coDriver.get(), 6));
    coButtonRB->WhileHeld(new AutonomousCommand());
    coButtonLB.reset(new JoystickButton(coDriver.get(), 5));
    coButtonLB->WhileHeld(new AutonomousCommand());
    coButtonY.reset(new JoystickButton(coDriver.get(), 4));
    coButtonY->WhileHeld(new AutonomousCommand());
    coButtonX.reset(new JoystickButton(coDriver.get(), 3));
    coButtonX->WhileHeld(new AutonomousCommand());
    coButtonB.reset(new JoystickButton(coDriver.get(), 2));
    coButtonB->WhileHeld(new AutonomousCommand());
    coButtonA.reset(new JoystickButton(coDriver.get(), 1));
    coButtonA->WhileHeld(new AutonomousCommand());
    driver.reset(new Joystick(0));
    
    dButtonStart.reset(new JoystickButton(driver.get(), 8));
    dButtonStart->WhileHeld(new AutonomousCommand());
    dButtonBack.reset(new JoystickButton(driver.get(), 7));
    dButtonBack->WhileHeld(new AutonomousCommand());
    dButtonRB.reset(new JoystickButton(driver.get(), 6));
    dButtonRB->WhileHeld(new AutonomousCommand());
    dButtonLB.reset(new JoystickButton(driver.get(), 5));
    dButtonLB->WhileHeld(new AutonomousCommand());
    dButtonY.reset(new JoystickButton(driver.get(), 4));
    dButtonY->WhileHeld(new AutonomousCommand());
    dButtonX.reset(new JoystickButton(driver.get(), 3));
    dButtonX->WhileHeld(new AutonomousCommand());
    dButtonB.reset(new JoystickButton(driver.get(), 2));
    dButtonB->WhileHeld(new AutonomousCommand());
    dButtonA.reset(new JoystickButton(driver.get(), 1));
    dButtonA->WhileHeld(new AutonomousCommand());

    // SmartDashboard Buttons
    SmartDashboard::PutData("MecanumDrive", new MecanumDrive());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getdriver() {
   return driver;
}

std::shared_ptr<Joystick> OI::getcoDriver() {
   return coDriver;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
