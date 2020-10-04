# Sliding Bar Game
import turtle
win = turtle.Screen()
win.title("Vipul")
win.bgcolor("Blue")
win.setup(width= 800, height=600)
win.tracer(0,0)

score=0

#Sliding Bar
bar = turtle.Turtle()
bar.speed(0)
bar.shape("square")
bar.color("black")
bar.shapesize(stretch_len=5, stretch_wid= 1)
bar.penup()
bar.goto(0,-250)

#Ball
ball=turtle.Turtle()
ball.speed(0)
ball.penup()
ball.shape("circle")
ball.color("red")
ball.goto(0,0)
ball.dx=0.2
ball.dy=0.2


#Pen
pen=turtle.Turtle()
pen.speed(0)
pen.color("red")
pen.penup()
pen.hideturtle()
pen.goto(250,250)


#Function
def bar_r():
    x = bar.xcor()
    x += 20
    bar.setx(x)

def bar_l():
    x = bar.xcor()
    x -= 20
    bar.setx(x)


#Keyboard binding
win.listen()
win.onkeypress(bar_r, 'Right')
win.onkeypress(bar_l, 'Left')


#main game loop
while True:
    win.update()

    #Move the ball
    ball.setx(ball.xcor() + ball.dx)
    ball.sety(ball.ycor() + ball.dy)

    #Border
    if ball.ycor() > 290:
        ball.sety(290)
        ball.dy*= -1

    if ball.ycor() < -290:
        ball.goto(0,0)
        ball.dy*= -1
        score+= 1
        pen.clear()
        pen.write("Deaths: {}".format(score), align="center", font=('Arial', 20, 'normal'))

    if ball.xcor() > 390:
        ball.setx(390)
        ball.dx*= -1

    if ball.xcor() < -390:
        ball.setx(-390)
        ball.dx*= -1

    #Collision

    if ball.ycor() > -250 and ball.ycor() < -240 and (ball.xcor() < bar.xcor() +50) and (ball.xcor()> bar.xcor() -50):
        ball.sety(-240)
        ball.dy*= -1



    if score==3:
        pen.clear()
        pen.write("Game Over", align="center", font=('Arial', 20, 'normal'))
        ball.goto(0,0)
        ball.dx=0
        ball.dy=0


