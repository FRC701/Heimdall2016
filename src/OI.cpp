#include "OI.h"
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/MecanumDrive.h"
#include "Commands/ElevatorOn.h"
#include "Commands/IntakeOn.h"
#include "Commands/SetActuator.h"
#include "Commands/SetBrake.h"
#include "Commands/SetHaySqueeze.h"
#include "Commands/ToggleActuator.h"
#include "Commands/ToggleBrake.h"
#include "Commands/ToggleHaySqueeze.h"


OI::OI() {
    // Process operator interface input here.

 //TODO find out and replace all old button controls
	coDriver.reset(new Joystick(kCoDriver_ID));


//	/*
    coLGreen.reset(new JoystickButton(coDriver.get(), kLGreen_ID));
    coLGreen->WhileHeld(new AutonomousCommand());
    coLRed.reset(new JoystickButton(coDriver.get(), kLRed_ID));
    coLRed->WhileHeld(new AutonomousCommand());
    coLBlack.reset(new JoystickButton(coDriver.get(), kLBlack_ID));
    coLBlack->WhileHeld(new AutonomousCommand());
    coLWhite.reset(new JoystickButton(coDriver.get(), kLWhite_ID));
    coLWhite->WhileHeld(new AutonomousCommand());
    coLBlue.reset(new JoystickButton(coDriver.get(), kLBlue_ID));
    coLBlue->WhileHeld(new AutonomousCommand());
    coRGreen.reset(new JoystickButton(coDriver.get(), kRGreen_ID));
    coRGreen->WhileHeld(new AutonomousCommand());
    coRBlack.reset(new JoystickButton(coDriver.get(), kRBlack_ID));
    coRBlack->WhileHeld(new AutonomousCommand());
    coRRed.reset(new JoystickButton(coDriver.get(), kRRed_ID));
    coRRed->WhileHeld(new AutonomousCommand());
    coRYellow.reset(new JoystickButton(coDriver.get(), kRYellow_ID));
    coRYellow->WhileHeld(new AutonomousCommand());
//    */


   /*
    coButtonStart.reset(new JoystickButton(coDriver.get(), kButtonStart_ID));
    coButtonStart->WhileHeld(new AutonomousCommand());
    coButtonBack.reset(new JoystickButton(coDriver.get(), kButtonBack_ID));
    coButtonBack->WhileHeld(new AutonomousCommand());
    coButtonRB.reset(new JoystickButton(coDriver.get(), kButtonRB_ID));
    coButtonRB->WhileHeld(new AutonomousCommand());
    coButtonLB.reset(new JoystickButton(coDriver.get(), kButtonLB_ID));
    coButtonLB->WhileHeld(new AutonomousCommand());
    coButtonY.reset(new JoystickButton(coDriver.get(), kButtonY_ID));
    coButtonY->WhileHeld(new AutonomousCommand());
    coButtonX.reset(new JoystickButton(coDriver.get(), kButtonX_ID));
    coButtonX->WhileHeld(new AutonomousCommand());
    coButtonB.reset(new JoystickButton(coDriver.get(), kButtonB_ID));
    coButtonB->WhileHeld(new AutonomousCommand());
    coButtonA.reset(new JoystickButton(coDriver.get(), kButtonA_ID));
    coButtonA->WhileHeld(new AutonomousCommand());
    */


    driver.reset(new Joystick(kDriver_ID));
    
    dButtonStart.reset(new JoystickButton(driver.get(), kButtonStart_ID));
    dButtonStart->WhileHeld(new AutonomousCommand());
    dButtonBack.reset(new JoystickButton(driver.get(), kButtonBack_ID));
    dButtonBack->WhenPressed(new AutonomousCommand());
    dButtonRB.reset(new JoystickButton(driver.get(), kButtonRB_ID));
    dButtonRB->WhenPressed(new ToggleBrake());
    dButtonLB.reset(new JoystickButton(driver.get(), kButtonLB_ID));
    dButtonLB->WhenPressed(new ToggleHaySqueeze());
    dButtonY.reset(new JoystickButton(driver.get(), kButtonY_ID));
    dButtonY->WhileHeld(new SetHaySqueeze(Elevator::kOpen));
    dButtonX.reset(new JoystickButton(driver.get(), kButtonX_ID));
    dButtonX->WhenPressed(new ToggleActuator());
    dButtonB.reset(new JoystickButton(driver.get(), kButtonB_ID));
    dButtonB->WhileHeld(new IntakeOn(1.0));
    dButtonA.reset(new JoystickButton(driver.get(), kButtonA_ID));
    dButtonA->WhileHeld(new IntakeOn(-1.0));

    // SmartDashboard Buttons
    SmartDashboard::PutData("MecanumDrive", new MecanumDrive());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());


}


std::shared_ptr<Joystick> OI::getdriver() {
   return driver;
}

std::shared_ptr<Joystick> OI::getcoDriver() {
   return coDriver;
}


