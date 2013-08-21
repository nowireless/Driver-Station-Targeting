/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.nowireless;
import com.github.nowireless.jni.NativeMethodCleanUp;
import com.github.nowireless.vision.VisionProcessing.Process;
import com.github.nowireless.jni.NativeMethods;
import java.util.logging.Level;
import java.util.logging.Logger;
/**
 *
 * @author nowireless
 */
public class DriverStationTargeting {
    /**
     * @param args the command line arguments
     */
   
    private static long timeToSleep = 500; 
    

    
    public static void main(String[] args) {
        System.out.println("Initializing Driver Station Targeting");
        NativeMethodCleanUp cleanUp = new NativeMethodCleanUp();
        
        cleanUp.AttachShutDownHook();
        
        System.out.println("Refersh Image is set to " + timeToSleep + "mili-seconds");
        NativeMethods.Initialize();
        Process process = new Process();
        process.Initialize();
        while(true) {
            process.Run();
            System.out.println("Running");
            try {
                Thread.sleep(timeToSleep);
            } catch (InterruptedException ex) {
                Logger.getLogger(DriverStationTargeting.class.getName()).log(Level.SEVERE, null, ex);
            }
            
        }
    }
}
