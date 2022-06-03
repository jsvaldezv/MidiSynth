/*
  ==============================================================================

    ControlsGUI.cpp
    Created: 3 Jun 2022 6:15:37pm
    Author:  Jesús Valdez

  ==============================================================================
*/

#include <JuceHeader.h>
#include "ControlsGUI.h"

ControlsGUI::ControlsGUI()
{
    gain.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    gain.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(gain);
    
    attack.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    attack.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(attack);
    
    decay.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    decay.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(decay);
    
    sustain.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    sustain.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(sustain);
    
    release.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    release.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(release);
    
    fmFreq.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    fmFreq.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(fmFreq);
    
    fmDepth.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    fmDepth.setTextBoxStyle(juce::Slider::TextEntryBoxPosition::NoTextBox, true, 0, 0);
    addAndMakeVisible(fmDepth);
}

ControlsGUI::~ControlsGUI(){}

void ControlsGUI::paint (juce::Graphics& g)
{
    g.fillAll(juce::Colours::pink);
}

void ControlsGUI::resized()
{
    gain.   setBoundsRelative(0.05f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    
    attack. setBoundsRelative(0.185f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    decay.  setBoundsRelative(0.32f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    sustain.setBoundsRelative(0.455f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    release.setBoundsRelative(0.59f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    
    fmFreq. setBoundsRelative(0.725f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
    fmDepth.setBoundsRelative(0.86f, 0.5f - (0.9f/2.0f), 0.1f, 0.9f);
}
