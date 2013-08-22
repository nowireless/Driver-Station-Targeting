/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.nowireless.vision.VisionProcessing;
import com.github.nowireless.PutStatsToRobot;
import com.github.nowireless.jni.NativeMethods;


/**
 *
 * @author nowireless
 */
public class Process {
   
    private PutStatsToRobot statsToRobot;
    public void Initialize() {
        statsToRobot = new PutStatsToRobot();
        statsToRobot.Initialize("127.0.0.1");
    }
    
    public void Run() {
        NativeMethods.ProcessImage();
        System.out.println(
                "High "+ NativeMethods.GetTargetDistance(NativeMethods.Target.High) +
                " Middle " +NativeMethods.GetTargetDistance(NativeMethods.Target.Middle) +
                " SecMiddle "+ NativeMethods.GetTargetDistance(NativeMethods.Target.SecondMiddle));
        statsToRobot.PutStats(
                NativeMethods.IsTargetVisable(NativeMethods.Target.High), 
                NativeMethods.IsTargetVisable(NativeMethods.Target.Middle), 
                NativeMethods.IsTargetVisable(NativeMethods.Target.SecondMiddle), 
                NativeMethods.GetTargetDistance(NativeMethods.Target.High), 
                NativeMethods.GetTargetDistance(NativeMethods.Target.Middle), 
                NativeMethods.GetTargetDistance(NativeMethods.Target.SecondMiddle), 
                NativeMethods.GetTargetAzimuth(NativeMethods.Target.High), 
                NativeMethods.GetTargetAzimuth(NativeMethods.Target.Middle), 
                NativeMethods.GetTargetAzimuth(NativeMethods.Target.SecondMiddle));
               
    }
        
}
