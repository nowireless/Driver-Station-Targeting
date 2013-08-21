#include "VisionInstance.h"
#include <iostream>

VisionInstance::VisionInstance(void) {
	visionSubsystemV2 = new VisionSubsystemV2();
}

VisionInstance::~VisionInstance(void) {
	delete visionSubsystemV2;
}


VisionInstance *VisionInstance::m_instance = 0;
VisionInstance *VisionInstance::GetInstance() {
	if(!m_instance) {
		m_instance = new VisionInstance();
	}
	return m_instance;
}


void VisionInstance::DeleteInstance() {
	delete m_instance;
}

void VisionInstance::Process() {
	printf("Process From c++\n");
}

double VisionInstance::GetTargetAzimuth(VisionInstance::Target target) {
	if(target == High) {
		return 1;
	} else if(target == Middle) {
		return 2;
	} else if(target == SecondMiddle) {
		return 3;
	} else {
		return -1;
	}
}

double VisionInstance::GetTargetDistance(Target target) {
	if(target == High) {
		return 4;
	} else if(target == Middle) {
		return 5;
	} else if(target == SecondMiddle) {
		return 6;
	} else {
		return -1;
	}
}

int VisionInstance::IsTargetVisable(Target target) {
	if(target == High) {
		return 1;
	} else if(target == Middle) {
		return 1;
	} else if(target == SecondMiddle) {
		return 1;
	} else {
		return 0;
	}
}