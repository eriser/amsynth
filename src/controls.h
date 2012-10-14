#ifndef _CONTROLS_H
#define _CONTROLS_H

enum Param 
{
	kAmsynthParameter_AmpEnvAttack             = 0,
	kAmsynthParameter_AmpEnvDecay              = 1,
	kAmsynthParameter_AmpEnvSustain            = 2,
	kAmsynthParameter_AmpEnvRelease            = 3,
	
	kAmsynthParameter_Oscillator1Waveform      = 4,
	
	kAmsynthParameter_FilterEnvAttack          = 5,
	kAmsynthParameter_FilterEnvDecay           = 6,
	kAmsynthParameter_FilterEnvSustain         = 7,
	kAmsynthParameter_FilterEnvRelease         = 8,
	kAmsynthParameter_FilterResonance          = 9,
	kAmsynthParameter_FilterEnvAmount          = 10,
	kAmsynthParameter_FilterCutoff             = 11,
	
	kAmsynthParameter_Oscillator2Detune        = 12,
	kAmsynthParameter_Oscillator2Waveform      = 13,
	
	kAmsynthParameter_MasterVolume             = 14,
	
	kAmsynthParameter_LFOFreq                  = 15,
	kAmsynthParameter_LFOWaveform              = 16,
	
	kAmsynthParameter_Oscillator2Octave        = 17,
	kAmsynthParameter_OscillatorMix            = 18,
	
	kAmsynthParameter_LFOToOscillators         = 19,
	kAmsynthParameter_LFOToFilterCutoff        = 20,
	kAmsynthParameter_LFOToAmp                 = 21,
	
	kAmsynthParameter_OscillatorMixRingMod     = 22,
	
	kAmsynthParameter_Oscillator1Pulsewidth    = 23,
	kAmsynthParameter_Oscillator2Pulsewidth    = 24,
	
	kAmsynthParameter_ReverbRoomsize           = 25,
	kAmsynthParameter_ReverbDamp               = 26,
	kAmsynthParameter_ReverbWet                = 27,
	kAmsynthParameter_ReverbWidth              = 28,
	
	kAmsynthParameter_AmpDistortion            = 29,
	
	kAmsynthParameter_Oscillator2Sync          = 30,

	kAmsynthParameter_PortamentoTime            = 31,
	
	kAmsynthParameter_KeyboardMode             = 32,
	
	kAmsynthParameterCount
};

typedef enum {
	KeyboardModePoly,
	KeyboardModeMono,
	KeyboardModeLegato,
} KeyboardMode;

#ifdef __cplusplus
extern "C" {
#endif

const char *parameter_name_from_index (int param_index);
int parameter_index_from_name (const char *param_name);

#ifdef __cplusplus
}
#endif

#endif
