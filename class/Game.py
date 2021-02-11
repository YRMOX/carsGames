import os
import time
from Car import *

###Game###
#-mazdaMx5#

class Game:
    def __init__(self):
        self.frameRate = float(60)
        self.gearRatio = [3.136, 0, 3.136, 1.888, 1.33, 1, 0.814]
        self.difRatio = 4.3
        self.engineTorque = [67.8, 118.6, 138.3, 146.4, 152, 146.4, 118.6]
        self.mazdaMx5 = Car("mazda", "mx5", 8.2, self.gearRatio, self.difRatio, self.engineTorque, 990, "185/60 R14 82H")
        
    def launch(self):
        self.mazdaMx5.engine.turnOnOff()
        self.mazdaMx5.gearBox.changeGear("1")
        self.mazdaMx5.clutch = 0
        while True == True:
            
            self.mazdaMx5.update(int(self.frameRate), 1, 0)
            os.system("clear")
            self.mazdaMx5.print()
            time.sleep(1/60)
