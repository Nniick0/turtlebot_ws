#!/usr/bin/env python
import rospy
from geometry_msgs.msg import PoseStamped
import Tkinter as tk  


def send_goal(x, y):
    goal = PoseStamped()
    goal.header.frame_id = "map"
    goal.pose.position.x = x
    goal.pose.position.y = y
    goal.pose.orientation.w = 1.0  
    goal_pub.publish(goal)
    rospy.loginfo("Goal sent to: {}, {}".format(x, y))


def start_navigation():
    
    send_goal(-8.74151802063, -0.674422264099)


def return_navigation():
    
    send_goal(8.36627578735, 2.06066083908)


rospy.init_node('gui_send_goal_node')
goal_pub = rospy.Publisher('/move_base_simple/goal', PoseStamped, queue_size=10)


root = tk.Tk()
root.title("Robot Navigation")


button_start = tk.Button(root, text="Go", command=start_navigation, width=15, height=3)
button_start.pack()

button_return = tk.Button(root, text="back", command=return_navigation, width=15, height=3)
button_return.pack()


root.mainloop()
