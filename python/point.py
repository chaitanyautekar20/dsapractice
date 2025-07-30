import turtle

# Set up the turtle
t = turtle.Turtle()
t.speed(0)
t.hideturtle()

# Function to draw a point
def draw_point(x, y, size=10, color="red"):
    t.penup()
    t.goto(x, y)
    t.dot(size, color)

# Draw the coordinate axes
t.pensize(2)
t.pencolor("black")

# X-axis
t.penup()
t.goto(-200, 0)
t.pendown()
t.goto(200, 0)

# Y-axis
t.penup()
t.goto(0, -200)
t.pendown()
t.goto(0, 200)

# Draw points in four quadrants
draw_point(50, 50, 10, "blue")    # Quadrant I
draw_point(-50, 50, 10, "green")   # Quadrant II
draw_point(-50, -50, 10, "purple") # Quadrant III
draw_point(50, -50, 10, "orange")  # Quadrant IV

# Display the window
turtle.done()
