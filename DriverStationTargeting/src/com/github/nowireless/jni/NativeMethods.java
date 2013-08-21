/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.nowireless.jni;

/**
 *
 * @author nowireless
 */
public class NativeMethods {
    private static native void deleteInstance();
   
    private static native void processImage();
  
    private static native double getHighTargetDistance();
    private static native double getMiddleTargetDistance();
    private static native double getSecondMiddleDistace();
    
    private static native double getHighTargetAzimuth();
    private static native double getMiddleTargetAzimuth();
    private static native double getSecondMiddleAzimuth();
    
    private static native int isHighTargetVisable();
    private static native int isMiddleTargetVisable();
    private static native int isSecondMiddleTargetVisable();
    
    public static enum Target {
        High,
        Middle,
        SecondMiddle,
        Low
    }
    
    public static void Initialize() {
        System.out.print("Loading Native Libary DriverStationTargetingLib ...");
        System.loadLibrary("DriverStationTargetingLib");
        System.out.println("Done");
    }
    
    public static void ProcessImage() {
        processImage();
    }
    
    public static void DeleteInstance() {
        System.out.print("Delting Native Instance ... ");
        deleteInstance();
        System.out.println("Done");
    }
    
    public static double GetTargetDistance(Target target) {
        if(target == Target.High) {
            return getHighTargetDistance();
        } else if (target == Target.Middle) {
            return getMiddleTargetDistance();
        } else if (target == Target.SecondMiddle) {
            return getSecondMiddleDistace();
        } else {
            return -1.0;
        }
    }
    
    public static double GetTargetAzimuth(Target target) {
        if(target == Target.High) {
            return getHighTargetAzimuth();
        } else if (target == Target.Middle) {
            return getMiddleTargetAzimuth();
        } else if (target == Target.SecondMiddle) {
            return getSecondMiddleAzimuth();
        } else {
            return -1.0;
        }
    }
    
    public static int IsTargetVisable(Target target) {
        if(target == Target.High) {
            return isHighTargetVisable();
        } else if(target == Target.Middle) {
            return isMiddleTargetVisable();
        } else if(target == Target.SecondMiddle) {
            return isSecondMiddleTargetVisable();
        } else {
            return 0;
        }
    }
}
