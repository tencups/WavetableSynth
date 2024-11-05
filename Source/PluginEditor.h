/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class WavetableSynthAudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    WavetableSynthAudioProcessorEditor(WavetableSynthAudioProcessor&); // constructor
    ~WavetableSynthAudioProcessorEditor() override; // destructor

    //==============================================================================
    void paint(juce::Graphics&) override; // plugin UI
    void resized() override; // layout of UI when window resizes

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    WavetableSynthAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(WavetableSynthAudioProcessorEditor) // class non copyable macro
};