//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSLiveAudioReverbFormat;

@interface LSLiveAudioReverb : NSObject
{
    struct Reverb *_reverb;
    float *_bufferData;
    int _bufferLength;
    LSLiveAudioReverbFormat *_format;
    float *_inputBuffer;
    int _inputBufferLen;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)processBufferList:(struct AudioBufferList *)arg1;
- (_Bool)process:(float **)arg1 andInput:(float *)arg2 andLen:(int)arg3 andSamplePerChannel:(int)arg4;
- (void)updateFormat:(id)arg1;
- (_Bool)getEnable;
- (id)initWithSample:(int)arg1 channels:(int)arg2 reverbFmt:(id)arg3;

@end

