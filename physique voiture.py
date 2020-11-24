engineDataLink = open("engine.ini", "r")
powerCurveLink = open("power.lut", "r")
engineData = engineDataLink.read()
powerCurve = powerCurveLink.read()

time = 9.7 #s
initialSpeed = 0 #m/s
initialPosition = 0 #m
torque = 134 #N.m
carMass = 1015 #kg
tireReference = [195, 50, 16]
wheelDiameter = tireReference[0]*tireReference[1]/500 + tireReference[2]*2.54 #cm
carCx = 1
fluidForce = (1/2)*1.292*initialSpeed**2*carCx
acceleration = (torque/(wheelDiameter/200))/carMass #m/s²
speed = ((torque/(wheelDiameter/200))/carMass)*time+initialSpeed #m/s
position = ((torque/(wheelDiameter/200))/carMass)*time**2+initialSpeed*time+initialPosition #m

print(str(acceleration) + " m/s²")
print(str(speed) + " m/s")
print(str(position) + " m")
