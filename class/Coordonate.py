###Coordonée###
#-x#
#-y#
#-z#

class Coordonate:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z
    
    def setZero(self):
        self.x = 0
        self.y = 0
        self.z = 0
    def print(self):
        print("x:" + str(round(self.x, 2)) + " y:" + str(round(self.y, 2)) + " z:" + str(round(self.z, 2)))
