//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVOAudioOptions : NSObject
{
    _Bool _audioJitterBufferFastAccelerate;
    _Bool _highpassFilter;
    int _audioJitterBufferMaxPackets;
}

+ (id)optionsWithBlock:(CDUnknownBlockType)arg1;
+ (id)options;
@property(readonly, nonatomic) _Bool highpassFilter; // @synthesize highpassFilter=_highpassFilter;
@property(readonly, nonatomic) _Bool audioJitterBufferFastAccelerate; // @synthesize audioJitterBufferFastAccelerate=_audioJitterBufferFastAccelerate;
@property(readonly, nonatomic) int audioJitterBufferMaxPackets; // @synthesize audioJitterBufferMaxPackets=_audioJitterBufferMaxPackets;
- (struct AudioOptions)coreOptions;
- (id)initWithBuilder:(id)arg1;
- (id)init;

@end

