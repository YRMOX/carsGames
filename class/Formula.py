###Formule###
#-Accélération#
#-Vitesse#
#-Position#

class Formula:
    def acceleration(self, zeroToHundred, analogVertical):
        acceleration = (100/3.6)/zeroToHundred*analogVertical
        return acceleration
    
    def acceleration2(self, engineTorque, clutch, gearRatio, difRatio, wheelDiameter, mass, analogVertical):
        acceleration = engineTorque*clutch*gearRatio*difRatio/(wheelDiameter/2)/mass*analogVertical
        return acceleration
    
    def speed(self, acceleration, frameRate, speed):
        speed = acceleration*3.6/frameRate+speed
        return speed
        
    def position(self, acceleration, frameRate, speed, position):
        position = acceleration/2/frameRate+speed/frameRate+position
        return position
