###Roue###
#-pneu#
#-diamètre#
#-périmètre#

class Wheel:
    def __init__(self, tireReference):
        self.tireReference = tireReference
        self.tireWidth = int(self.tireReference[0] + self.tireReference[1] + self.tireReference[2])
        self.tirePercent = int(self.tireReference[4] + self.tireReference[5])
        self.tireSize = int(self.tireReference[8] + self.tireReference[9])
        self.diameter = (self.tireWidth*(self.tirePercent/100)*2+self.tireSize*25.4)/1000
        self.perimeter = 3.142*(self.diameter/2)**2
        
    def update(self, carSpeed):
        self.rpm = carSpeed/self.perimeter
    
    def print(self):
        print(self.tireReference)
        print(self.tireWidth)
        print(self.tirePercent)
        print(self.tireSize)
        print(round(self.diameter, 3))
