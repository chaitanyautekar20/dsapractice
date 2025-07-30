import turtle

# Set up the turtle
t = turtle.Turtle()
t.speed(3)

t.fillcolor("blue")
t.begin_fill()
# Draw a pentagon
for _ in range(5):
    t.forward(100)  # Move forward by 100 units
    t.right(72)  # Turn right by 72 degrees
    
t.end_fill()
# Hide the turtle and display the window
turtle.done()
