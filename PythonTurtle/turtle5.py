import turtle
import time

#set file name
fname="dial.eps"

for x in range(0,72):
    turtle.left(5)
    for n in range(0,2):
        turtle.forward(150)
        turtle.left(60) 

ts = turtle.getscreen()
ts.getcanvas().postscript(file=fname)

print "Saved image to: ", fname
print "All done. Click image to exit."

turtle.exitonclick()
