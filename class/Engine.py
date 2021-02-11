###Moteur###
#-Couple en fonction des rpm#
#-Etat du Moteur#
#-tours par minutes#

class Engine:
    def __init__(self, engineTorque):
        self.engineTorque = engineTorque
        self.engineState = False
        self.rpm = 0 #tr/min
        
    def turnOnOff(self):
        if self.engineState:
            self.engineState = False
        else:
            self.engineState = True
    
    def update(self, wheelRpm, gearRatio, difRatio, analogVertical):
        if self.engineState:
            if self.rpm < 7000:
                self.rpm = wheelRpm*gearRatio*difRatio*analogVertical
    
    def getTorque(self):
        if self.rpm >= 7000:
            return self.engineTorque[6]
        if self.rpm >= 6000:
            return self.engineTorque[5]
        if self.rpm >= 5000:
            return self.engineTorque[4]
        if self.rpm >= 4000:
            return self.engineTorque[3]
        if self.rpm >= 3000:
            return self.engineTorque[2]
        if self.rpm >= 2000:
            return self.engineTorque[1]
        if self.rpm >= 1000:
            return self.engineTorque[0]
        if self.rpm < 1000:
            return 0
    
    def print(self):
        print(self.engineState)
        print(round(self.rpm, 2))
