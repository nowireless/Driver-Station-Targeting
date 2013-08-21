@echo Creating JNI header for class com.github.nowireless.jni.NativeMethods
@cd build\classes
javah -d ..\..\..\DriverStationTargetingLib\DriverStationTargetingLib -jni com.github.nowireless.jni.NativeMethods
@pause