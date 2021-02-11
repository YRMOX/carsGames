###Boite de Vitesse###
#-Vitesse#
#-Ratio des Vitesse#

class GearBox:
    def __init__(self, name, gearRatio):
        self.gear = 0
        self.gearRatio = gearRatio

    def changeGear(self, gear):
        self.gear = gear

    def getGearRatio(self):
        if self.gear == "R":
            return self.gearRatio[0]
        if self.gear == "N":
            return self.gearRatio[1]
        if self.gear == "1":
            return self.gearRatio[2]
        if self.gear == "2":
            return self.gearRatio[3]
        if self.gear == "3":
            return self.gearRatio[4]
        if self.gear == "4":
            return self.gearRatio[5]
        if self.gear == "5":
            return self.gearRatio[6]

    def print(self):
        print(self.gear)
        print(self.gearRatio)
