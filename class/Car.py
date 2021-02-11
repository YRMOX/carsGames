from Coordonate import *
from Engine import *
from Formula import *
from GearBox import *
from Wheel import *

###Voiture###
#-Marque#
#-Model#
#-0à100#
#-Moteur#
#-Boite de Vitesse#
#-Ratio du Différenciel#
#-Roue#
#-Embreillage#
#-Masse#
#-Accélération#
#-Vitesse#
#-Position#
#-Calcul#

class Car:
    def __init__(self, brand, model, zeroToHundred, gearRatio, difRatio, engineTorque, mass, tire):
        self.brand = brand
        self.model = model
        self.zeroToHundred = zeroToHundred
        self.engine = Engine(engineTorque)
        self.gearBox = GearBox("NA6A", gearRatio)
        self.difRatio = difRatio
        self.wheel = Wheel(tire)
        self.clutch = 1
        self.mass = mass
        self.acceleration = Coordonate(0, 0, 0)
        self.speed = Coordonate(0, 0, 0)
        self.position = Coordonate(0, 0, 0)
        self.formula = Formula()

    def update(self, frameRate, analogVertical, analogHorizontal):
        self.acceleration.x = self.formula.acceleration(self.zeroToHundred, analogVertical)
        self.acceleration.y = self.formula.acceleration2(self.engine.getTorque(), self.clutch, self.gearBox.getGearRatio(), self.difRatio, self.wheel.diameter, self.mass, analogVertical)
        self.acceleration.z = analogHorizontal
        self.speed.x = self.formula.speed(self.acceleration.x, frameRate, self.speed.x)
        self.speed.y = self.formula.speed(self.acceleration.y, frameRate, self.speed.y)
        self.speed.z = self.formula.speed(self.acceleration.z, frameRate, self.speed.z)
        self.position.x = self.formula.position(self.acceleration.x, frameRate, self.speed.x, self.position.x)
        self.position.y = self.formula.position(self.acceleration.y, frameRate, self.speed.y, self.position.y)
        self.position.z = self.formula.position(self.acceleration.z, frameRate, self.speed.z, self.position.z)
        self.wheel.update(self.speed.x)
        self.engine.update(self.wheel.rpm, self.gearBox.getGearRatio(), self.difRatio, analogVertical)

    def print(self):
        print("")
        print("acceleration(m/s²):")
        self.acceleration.print()
        print("speed(km/h):")
        self.speed.print()
        print("position(m):")
        self.position.print()
        print("gearBox:")
        self.gearBox.print()
        print("gearRatio:")
        print(self.gearBox.getGearRatio())
        print("wheel:")
        self.wheel.print()
        print("engine:")
        self.engine.print()
        print(self.engine.getTorque())
        print("")
