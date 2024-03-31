# Exploring Unit Testing on Arduino / ESP32

In this project I'm looking to explore how unit testing works for embedded systems.

I'm using the Unity framework for C in this version running in a VS Code environment with PlatformIO to talk to an ESP32 dev board. 

Tests can be partitioned into tests that run on the target hardware and tests that could be run on the development (desktop) system. 

By dividing the unit tests up like this, functionality that doesn't require the special features of the embedded processor can be tested much more quickly. 

Here I've put together a little brain-dead math library and a library for working with an LED. 

Free for others to use at their own risk. No warrantee offered or implied. 

Cheers! John. 

