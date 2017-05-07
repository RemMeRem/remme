#ifndef TASK_H
#define TASK_H

#include<string>
#include "Notification.h"
#include "Objective.h"

enum TaskStatus {
	COMPLETED,
	INCOMPLETE
};

class Task
{
public:
	std::string shortDescription;
	std::string fullDescription;
	Notification notification;
	Objective objective;

	Task() {};
	Task( std::string shortD, std::string fullD, Notification not, Objective obj ) 
		: 
		shortDescription( shortD ), fullDescription( fullD ), notification( not ), objective( obj ) {};
	~Task() {};
};

#endif