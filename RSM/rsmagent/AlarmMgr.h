/* Copyright (C) 2010 Ion Torrent Systems, Inc. All Rights Reserved */
#ifndef ALARMMGR_H
#define ALARMMGR_H
#include <time.h>

#include "AeOSLocal.h"
#include "AeTypes.h"
#include "AeError.h"
#include "AeOS.h"

typedef struct{
	time_t start_t;
	time_t end_t;
	int active;
	char name[256];
	char msg[252];
} Alarms_t;

void AlarmMgrInit(AeInt32 iDeviceIdIn, AeInt32 iServerIdIn);
void AlarmMgrSave(void);
void AlarmMgr_AddAlarmByName(char const * const AlarmName, char const * const AlarmTxt);
void AlarmMgr_DelAlarmByName(char const * const AlarmName);

#endif // ALARMMGR_H
