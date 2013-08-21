#include "com_github_nowireless_jni_NativeMethods.h"
#include "VisionInstance.h"


/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    deleteInstance
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_nowireless_jni_NativeMethods_deleteInstance(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	vision->DeleteInstance();
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    processImage
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_github_nowireless_jni_NativeMethods_processImage(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	vision->Process();
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getHighTargetDistance
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getHighTargetDistance(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble distance = vision->GetTargetDistance(VisionInstance::High);
	return distance;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getMiddleTargetDistance
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getMiddleTargetDistance(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble distance = vision->GetTargetDistance(VisionInstance::Middle);
	return distance;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getSecondMiddleDistace
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getSecondMiddleDistace(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble distance = vision->GetTargetDistance(VisionInstance::SecondMiddle);
	return distance;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getHighTargetAzimuth
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getHighTargetAzimuth(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble azimuth = vision->GetTargetAzimuth(VisionInstance::High);
	return azimuth;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getMiddleTargetAzimuth
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getMiddleTargetAzimuth(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble azimuth = vision->GetTargetAzimuth(VisionInstance::Middle);
	return azimuth;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    getSecondMiddleAzimuth
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_com_github_nowireless_jni_NativeMethods_getSecondMiddleAzimuth(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jdouble azimuth = vision->GetTargetAzimuth(VisionInstance::SecondMiddle);
	return azimuth;

}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    isHighTargetVisable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_nowireless_jni_NativeMethods_isHighTargetVisable(JNIEnv *, jclass) {
	VisionInstance *vision = VisionInstance::GetInstance();
	jint visable = vision->IsTargetVisable(VisionInstance::High);
	return visable;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    isMiddleTargetVisable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_nowireless_jni_NativeMethods_isMiddleTargetVisable(JNIEnv *, jclass){
	VisionInstance *vision = VisionInstance::GetInstance();
	jint visable = vision->IsTargetVisable(VisionInstance::Middle);
	return visable;
}

/*
 * Class:     com_github_nowireless_jni_NativeMethods
 * Method:    isSecondMiddleTargetVisable
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_github_nowireless_jni_NativeMethods_isSecondMiddleTargetVisable(JNIEnv *, jclass){
	VisionInstance *vision = VisionInstance::GetInstance();
	jint visable = vision->IsTargetVisable(VisionInstance::SecondMiddle);
	return visable;
}