#pragma once
#include "VisionSubsystemV2.h"
#include <windows.h>

class VisionInstance
{
private:
	static VisionInstance *m_instance;
	VisionSubsystemV2 *visionSubsystemV2;
	
public:
	enum Target {
		High,
		Middle,
		SecondMiddle
	};	
	VisionInstance(void);
	~VisionInstance(void);
	static VisionInstance *GetInstance();
	void DeleteInstance();
	
	void Process();

	int IsTargetVisable(Target target);
	double GetTargetDistance(Target target);
	double GetTargetAzimuth(Target target);
	
};
