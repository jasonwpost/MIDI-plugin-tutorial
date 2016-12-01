/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class AudiopluginAudioProcessorEditor  : public AudioProcessorEditor, private Slider::Listener
{
public:
    AudiopluginAudioProcessorEditor (AudiopluginAudioProcessor&);
    ~AudiopluginAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    void sliderValueChanged (Slider* slider) override;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AudiopluginAudioProcessor& processor;
    
    Slider midiVolume;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudiopluginAudioProcessorEditor)
};


#endif  // PLUGINEDITOR_H_INCLUDED
