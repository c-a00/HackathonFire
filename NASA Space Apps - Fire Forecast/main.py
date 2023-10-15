#forest fire forecast
import turtle
import random
import time

#wind direction
wind_pick = random.randint(0, 3)
if wind_pick == 0:
    wind_direction = "u"
elif wind_pick == 1:
    wind_direction = "r"
elif wind_pick == 2:
    wind_direction = "d"
elif wind_pick == 3:
    wind_direction = "l"

firechoose = random.randint(0,1)

startposx = random.randint(-360, 360)
startposy = random.randint(-240, 240)

#background
wn = turtle.Screen()
wn.bgpic("CambodiaForest.gif")
wn.setup(720, 480)
wn.title("Forest fire forecast")
    
#fire attributes
fire = turtle.Turtle()
fire.speed(0)
fire.color("yellow")
fire.shape("circle")
fire.shapesize(stretch_wid=0.2, stretch_len=0.2)
fire.penup()
fire.goto(startposx, startposy)

hfire = turtle.Turtle()
hfire.speed(0)
hfire.color("orange")
hfire.shape("circle")
hfire.shapesize(stretch_wid=0.1, stretch_len=0.1)
hfire.penup()
hfire.goto(startposx, startposy)

ofire = turtle.Turtle()
ofire.speed(0)
ofire.color("red")
ofire.shape("circle")
ofire.shapesize(stretch_wid=0.1, stretch_len=0.1)
ofire.penup()
ofire.goto(startposx, startposy)

if wind_direction == "u":
    fire.dy = 2
    hfire.dy = 2
    ofire.dy = 2
elif wind_direction == "d":
    fire.dy = -2
    hfire.dy = -2
    ofire.dy = -2
else:
    if firechoose == 1:
        hfire.dy = 1
        fire.dy = 1
        ofire.dy = 1
    else:
        hfire.dy = -1
        fire.dy = -1
        ofire.dy = -1

if wind_direction == "r":
    hfire.dx = 2
    fire.dx = 2
    ofire.dx = 2
elif wind_direction == "l":
    hfire.dx = -2
    fire.dx = -2
    ofire.dx = -2
else:
    if firechoose == 1:
        hfire.dx = 1
        fire.dx = 1
        ofire.dx = 1
    else:
        hfire.dx = -1
        fire.dx = -1
        ofire.dx = -1

size = 1
hsize = 0.75
osize = 0.25
tim = random.randint(10, 20)

#main loop
for i in range(tim):
    wn.update()
    fire.setx(fire.xcor() + fire.dx)
    fire.sety(fire.ycor() + fire.dy)
    fire.stamp()
    size += 0.5
    fire.shapesize(size)
    fire.dx = fire.dx * 1.2
    fire.dy = fire.dy * 1.2
    time.sleep(0.001)
    
for i in range(tim - (round(tim/5))):    
    hfire.setx(hfire.xcor() + hfire.dx)
    hfire.sety(hfire.ycor() + hfire.dy)
    hfire.stamp()
    hsize += 0.3
    hfire.shapesize(hsize)
    hfire.dx = hfire.dx * 1.2
    hfire.dy = hfire.dy * 1.2
    time.sleep(0.001)

for i in range(tim - (round(tim/2))):    
    ofire.setx(ofire.xcor() + ofire.dx)
    ofire.sety(ofire.ycor() + ofire.dy)
    ofire.stamp()
    osize += 0.3
    ofire.shapesize(osize)
    ofire.dx = ofire.dx * 1.2
    ofire.dy = ofire.dy * 1.2
    time.sleep(0.001)

#draw gridlines
gridy = turtle.Turtle()
gridy.color("black")
gridy.shape("square")
gridy.shapesize(stretch_len=0.5, stretch_wid=0.5)
gridy.penup()
gridy.speed(100)
gridy.setx(-360)
gridy.sety(240)
gridy.setheading(270)
gridy.pendown()

gridx = turtle.Turtle()
gridx.color("black")
gridx.shape("square")
gridx.shapesize(stretch_len=0.5, stretch_wid=0.5)
gridx.penup()
gridx.speed(100)
gridx.setx(-360)
gridx.sety(-240)
gridx.pendown()

draw = True
while draw:
    for i in range(int(720/10)):
        gridy.forward(480)
        gridy.setx(gridy.xcor() + 10)
        gridy.backward(480)
        gridy.setx(gridy.xcor() + 10)

    for i in range(int(480/10)):
        gridx.forward(720)
        gridx.sety(gridx.ycor() + 10)
        gridx.backward(720)
        gridx.sety(gridx.ycor() + 10)
    draw = False

turtle.done()
