#ifndef OI_H
#define OI_H

//#include "WPILib.h"
#include "Joystick.h"
#include "Buttons/JoystickButton.h"

class OI {
private:
	std::shared_ptr<Joystick> coDriver;
	std::shared_ptr<JoystickButton> coLGreen;
	std::shared_ptr<JoystickButton> coLRed;
	std::shared_ptr<JoystickButton> coLBlack;
	std::shared_ptr<JoystickButton> coLWhite;
	std::shared_ptr<JoystickButton> coLBlue;
	std::shared_ptr<JoystickButton> coRGreen;
	std::shared_ptr<JoystickButton> coRBlack;
	std::shared_ptr<JoystickButton> coRRed;
	std::shared_ptr<JoystickButton> coRYellow;
	std::shared_ptr<JoystickButton> coButtonStart;
	std::shared_ptr<JoystickButton> coButtonBack;
	std::shared_ptr<JoystickButton> coButtonRB;
	std::shared_ptr<JoystickButton> coButtonLB;
	std::shared_ptr<JoystickButton> coButtonY;
	std::shared_ptr<JoystickButton> coButtonX;
	std::shared_ptr<JoystickButton> coButtonB;
	std::shared_ptr<JoystickButton> coButtonA;

	std::shared_ptr<Joystick> driver;
	std::shared_ptr<JoystickButton> dButtonStart;
	std::shared_ptr<JoystickButton> dButtonBack;
	std::shared_ptr<JoystickButton> dButtonRB;
	std::shared_ptr<JoystickButton> dButtonLB;
	std::shared_ptr<JoystickButton> dButtonY;
	std::shared_ptr<JoystickButton> dButtonX;
	std::shared_ptr<JoystickButton> dButtonB;
	std::shared_ptr<JoystickButton> dButtonA;

public:
	OI();
	std::shared_ptr<Joystick> getdriver();
	std::shared_ptr<Joystick> getcoDriver();

//.........Driver/CodriverIds..........

	static const int kDriver_ID = 0;
	static const int kCoDriver_ID = 1;

//..........XboxControllerbuttons..........

	static const int kButtonA_ID = 1;
	static const int kButtonB_ID = 2;
	static const int kButtonX_ID = 3;
	static const int kButtonY_ID = 4;
	static const int kButtonLB_ID = 5;
	static const int kButtonRB_ID = 6;
	static const int kButtonBack_ID = 7;
	static const int kButtonStart_ID = 8;
	static const int kButtonL3_ID = 9;
	static const int kButtonR3_ID = 10;

//..........CodriverBoxButtons..........

	static const int kLGreen_ID = 15;
	static const int kLRed_ID = 12;
	static const int kLBlack_ID = 8;
	static const int kLWhite_ID = 13;
	static const int kLBlue_ID = 9;
	static const int kRGreen_ID = 4;
	static const int kRBlack_ID = 3;
	static const int kRRed_ID = 1;
	static const int kRYellow_ID = 2;




};

#endif
