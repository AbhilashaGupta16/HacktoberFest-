from random import randint

from kivy.app import App
from kivy.clock import Clock
from kivy.properties import NumericProperty, ReferenceListProperty, ObjectProperty, StringProperty
from kivy.uix.widget import Widget
from kivy.vector import Vector


class PongPaddle(Widget):
    score = NumericProperty(0)
    lives= NumericProperty(10)

    def bounce_ball(self, ball):
        if self.collide_widget(ball):
            ball.velocity_y *= -1
            
    def bounce_ball(self, ball2):
        if self.collide_widget(ball2):
            ball2.velocity_y *= -1
            
    def bounce_ball(self, ball1):
        if self.collide_widget(ball1):
            ball1.velocity_y *= -1
            


class PongBall(Widget):
    velocity_x = NumericProperty(0)
    velocity_y = NumericProperty(0)
    velocity = ReferenceListProperty(velocity_x, velocity_y)

    # Latest Position = Current Velocity + Current Position
    def move(self):
        self.pos = Vector(*self.velocity) + self.pos

# Update - moving the ball by calling the move() and other stuff
class PongGame(Widget):
    ball = ObjectProperty(None)
    ball1 = ObjectProperty(None)
    ball2 = ObjectProperty(None)
    player = ObjectProperty(None)
    

    def serve_ball(self):
        self.ball.velocity = Vector(6, 0).rotate(randint(45, 360))
        self.ball1.velocity = Vector(6, 0).rotate(randint(45, 360))
        self.ball2.velocity = Vector(6, 0).rotate(randint(45, 360))
    
    

    def update(self, dt):
        self.ball.move()
        self.ball1.move()
        self.ball2.move()
        # bounce off top and bottom
        #ball0
        if (self.ball.y  < 0) :
            self.ball.velocity_y *= -1.01
            self.player.lives -=1                   #bounceoff the bottom and increase the score
            
        if(self.ball.y > self.height -50):
            self.ball.velocity_y *= -1
            
        #ball1
        if (self.ball1.y < 0) :
            self.ball1.velocity_y *= -1.01
            self.player.lives -=1
        if(self.ball1.y > self.height-50 ):
            self.ball1.velocity_y *= -1
         
        #ball2
        if (self.ball2.y < 0) :
            self.ball2.velocity_y *= -1.01
            self.player.lives -=1
        if(self.ball2.y > self.height-50):
            self.ball2.velocity_y *= -1
            

        # bounce off left 
        #ball0
        if self.ball.x < 0:
            self.ball.velocity_x *= -1
            
        #ball1
        if self.ball1.x < 0:
            self.ball1.velocity_x *= -1
            
        #ball2
        if self.ball2.x < 0:
            self.ball2.velocity_x *= -1
            
        # bounce off right
        #ball0
        if self.ball.x > self.width - 50:
            self.ball.velocity_x *= -1
        
        #ball1
        if self.ball1.x > self.width - 50:
            self.ball1.velocity_x *= -1

        #ball2
        if self.ball2.x > self.width - 50:
            self.ball2.velocity_x *= -1  
         
        self.player.bounce_ball(self.ball)
        self.player.bounce_ball(self.ball1)
        self.player.bounce_ball(self.ball2)
        self.player.score +=1
        if(self.player.lives==-1):
            high= StringProperty(None)
            exit()
    def on_touch_move(self, touch):
        if touch.y < self.width / 1:
            self.player.center_x = touch.x
            
class mygameApp(App):
    def build(self):
        game = PongGame()
        game.serve_ball()
        Clock.schedule_interval(game.update, 1.0 / 60.0)
        return game

    mygameApp().run()