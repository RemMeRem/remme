#ifndef NOTIFICATION_H
#define NOTIFICATION_H

enum NotificationType {
	TELEGRAM,
	PHONE,
	EMAIL
};

class Notification
{
public:
	NotificationType type;
	int time;

	Notification() {};
	Notification(NotificationType Type, int Time) : type(Type), time(Time) {};
	~Notification() {};
};

#endif