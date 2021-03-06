#ifndef COMMANDBASE_H
#define COMMANDBASE_H

#include <Commands/Command.h>
#include <Commands/Scheduler.h>

#include "Subsystems/DriveTrain.h"
#include "Subsystems/RangeFinder.h"
#include "Subsystems/Datalogger.h"
#include "OI.h"


class CommandBase: public Command {
public:
	CommandBase(const char *name);
	CommandBase();
	static void init();
	static DriveTrain *drivetrain;
	static DataLogger *datalogger;
	static OI *oi;
	static RangeFinder *rangefinder;
};

#endif
