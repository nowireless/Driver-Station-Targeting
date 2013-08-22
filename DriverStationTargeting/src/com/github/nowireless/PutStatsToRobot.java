/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.nowireless;
import edu.wpi.first.wpilibj.networktables.NetworkTable;
/**
 *
 * @author nowireless
 */
public class PutStatsToRobot {
    private NetworkTable table;
    
    public void Initialize() {
        Initialize("10.30.81.2");
   }
    
    public void Initialize(String networkTableServer) {
        NetworkTable.setClientMode();
        NetworkTable.setIPAddress(networkTableServer);
        table = NetworkTable.getTable("Vision");
    }
    
    public void PutStats(int isHighTargetVisable, 
                         int isMiddleTargetVisable,
                         int isSecondMiddleTargetVisable,
                         double highTargetDistance,
                         double middleTagetDistance,
                         double secondTargetDistance,
                         double highTargetAzimuth,
                         double middleTargetAzimuth,
                         double secondMiddleTargetAzimuth) {
        table.putNumber("High Target Visibility", isHighTargetVisable);
        table.putNumber("Middle Target Visibility", isMiddleTargetVisable);
        table.putNumber("Second Middle Target Visibility", isSecondMiddleTargetVisable);
        
        table.putNumber("High Target Distance", highTargetDistance);
        table.putNumber("Middle Target Distance", middleTagetDistance);
        table.putNumber("Second Middle Target Distance", secondTargetDistance);
        
        table.putNumber("High Target Azimuth", highTargetAzimuth);
        table.putNumber("Middle Target Azimuth", middleTargetAzimuth);
        table.putNumber("Second Middle Target Azimuth", secondMiddleTargetAzimuth);
    }
}
