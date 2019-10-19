//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

#import "HAMOrientationDelegate-Protocol.h"

@class AUAudioUnitBus, AUAudioUnitBusArray, AUParameter, AUParameterTree, AVAudioPCMBuffer, NSString;

@interface HAMAudioUnitAmbisonicMixer : AUAudioUnit <HAMOrientationDelegate>
{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBus *_outputBus;
    AUParameter *_w;
    AUParameter *_x;
    AUParameter *_y;
    AUParameter *_z;
    AVAudioPCMBuffer *_inputBuffer;
    struct vector<const float *, std::__1::allocator<const float *>> _inputPlanarArray;
    struct unique_ptr<vraudio::BinauralSurroundRenderer, std::__1::default_delete<vraudio::BinauralSurroundRenderer>> _renderer;
    struct HAMAmbisonicRenderBlockParams _renderParams;
    AUAudioUnitBusArray *_inputBusses;
    AUAudioUnitBusArray *_outputBusses;
    AUParameterTree *_parameterTree;
}

+ (void)implementParameterTree:(id)arg1 withRenderParams:(struct HAMAmbisonicRenderBlockParams *)arg2;
- (id)parameterTree;
- (id)outputBusses;
- (id)inputBusses;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDUnknownBlockType)internalRenderBlock;
- (_Bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (_Bool)canProcessInPlace;
- (id)channelCapabilities;
- (void)deallocateRenderResources;
- (_Bool)allocateRenderResourcesAndReturnError:(id *)arg1;
- (double)latency;
- (void)orientationDidChange:(union _GLKQuaternion)arg1;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

