// copyright 2018

#pragma once

#include <iostream>

class AnalogSensor {
 public:
    explicit AnalogSensor(unsigned int samples);
    ~AnalogSensor();
    int Read();
 private:
    unsigned int mSamples;
};
