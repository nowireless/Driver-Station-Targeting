/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.nowireless.jni;

/**
 *
 * @author nowireless
 */
public class NativeMethodCleanUp {
    public void AttachShutDownHook() {
        System.out.print("Attachinging Shutdown Hook ...");
        
        Runtime.getRuntime().addShutdownHook(new Thread() {
            @Override
            public void run() {
                NativeMethods.DeleteInstance();
                System.out.println("Shuting Down ... ");
            }
            
        });
        System.out.println(" Done");
    }
}
