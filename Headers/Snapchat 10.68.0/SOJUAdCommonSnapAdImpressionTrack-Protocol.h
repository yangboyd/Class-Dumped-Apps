//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@protocol SOJUAdCommonSnapAdImpressionTrack <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *topsnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSString *creativeId;
@property(readonly, copy, nonatomic) NSNumber *swipeCount;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *swiped;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds;
@end

