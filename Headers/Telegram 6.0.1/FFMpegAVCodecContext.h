//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FFMpegAVCodec;

@interface FFMpegAVCodecContext : NSObject
{
    FFMpegAVCodec *_codec;
    struct AVCodecContext *_impl;
}

- (void).cxx_destruct;
- (void)flushBuffers;
- (_Bool)receiveIntoFrame:(id)arg1;
- (_Bool)open;
- (int)sampleFormat;
- (int)sampleRate;
- (int)channels;
- (void *)impl;
- (void)dealloc;
- (id)initWithCodec:(id)arg1;

@end

