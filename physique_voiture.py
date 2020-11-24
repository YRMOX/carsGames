time = 1 #s
initialSpeed = 0 #km/h
initialPosition = 0 #m
torque = 1000 #N.m
mass = 1000 #kg
tireReference = [225, 40, 18]
wheelDiameter = tireReference[0]*tireReference[1]/500 + tireReference[2]*2.54 #cm
acceleration = (torque/(wheelDiameter/200))/mass
speed = ((torque/(wheelDiameter/200))/mass)*time+initialSpeed
position = ((torque/(wheelDiameter/200))/mass)*time**2+initialSpeed*time+initialPosition
print(acceleration)
print(speed)
print(position)
print(wheelDiameter)