#!/usr/bin/env python
import rospy
from sound_play.libsoundplay import SoundClient

def say_something(text):
    soundhandle = SoundClient()
    rospy.sleep(1)  
    soundhandle.say(text)  
    rospy.sleep(2)  

if __name__ == '__main__':
    rospy.init_node('talking_robot')
    say_something("Hello! I am a robot, how can I help you?")
