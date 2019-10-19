//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLAudioFormatConstraint-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"

@class MLAudioQualityConfig, NSString, YTIAudioTrack, YTReachabilityController;

@interface MLAudioQualityFormatConstraint : NSObject <MLAudioFormatConstraint, YTReachabilityObserver>
{
    MLAudioQualityConfig *_config;
    YTReachabilityController *_reachability;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _onWiFi
}

- (void).cxx_destruct;
- (void)reachabilityDidChange;
@property(readonly, nonatomic) YTIAudioTrack *audioTrack;
- (id)filterFormats:(id)arg1;
@property(readonly, nonatomic) _Bool disableTrack;
@property(readonly, nonatomic) long long formatSelectionReason;
- (id)initWithAudioQualityConfig:(id)arg1 reachability:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

