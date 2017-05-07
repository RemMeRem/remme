#ifndef OBJECTIVE_H
#define OBJECTIVE_H

#include"Task.h"
#include<vector>
#include<string>

enum ObjectiveStatus {
	COMPLETED,
	INCOMPLETE,
	FAILED
};

class Objective
{
public:
	std::string shortDescription;
	std::string fullDescription;
	
	int time;
	std::vector<Task> tasks;
	ObjectiveStatus status;

	Objective() {};
	Objective(std::string shortD, std::string fullD, int t)
		:
		shortDescription(shortD), fullDescription(fullD), time(t) {};
	~Objective() {};
};

#endif