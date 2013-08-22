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
	visionSubsystemV2->ProcessImageFromFileSystem(".\\25feet.jpg");
}

double VisionInstance::GetTargetAzimuth(VisionInstance::Target target) {
	if(target == High) {
		return visionSubsystemV2->GetHighTargetAzimuth();
	} else if(target == Middle) {
		return visionSubsystemV2->GetMiddleTargetAzimuth();
	} else if(target == SecondMiddle) {
		return visionSubsystemV2->GetSecondMiddleTargetAzimuth();
	} else {
		return -1;
	}
}

double VisionInstance::GetTargetDistance(Target target) {
	if(target == High) {
		return visionSubsystemV2->GetHighTargetDistance();
	} else if(target == Middle) {
		return visionSubsystemV2->GetMiddleTargetDistance();
	} else if(target == SecondMiddle) {
		return visionSubsystemV2->GetSecondMiddleTargetDistance();
	} else {
		return -1;
	}
}

int VisionInstance::IsTargetVisable(Target target) {
	if(target == High) {
		return boolToInt(visionSubsystemV2->IsHighTargetVisable());
	} else if(target == Middle) {
		return boolToInt(visionSubsystemV2->IsMiddleTargetVisable());
	} else if(target == SecondMiddle) {
		return boolToInt(visionSubsystemV2->IsSecondMiddleTargetVisable());
	} else {
		return 0;
	}
}

int VisionInstance::boolToInt(bool boolValue){
	if(boolValue) {
		return 1;
	} else {
		return 0;
	}
}