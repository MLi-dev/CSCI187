cmake_minimum_required(VERSION 3.21)
project(BirdFeeder)

set(CMAKE_CXX_STANDARD 14)

add_executable(BirdFeeder main.cpp BirdFeeder.cpp BirdFeeder.h Sensor.cpp Sensor.h FeedingDoor.cpp FeedingDoor.h RemoteControl.cpp RemoteControl.h)
