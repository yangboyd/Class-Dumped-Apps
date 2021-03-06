//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAViewabilityBaseTracker.h>

#import <Funny/SMAViewabilityVideoTracking-Protocol.h>

@class NSString;

@interface SMAViewabilityVideoTracker : SMAViewabilityBaseTracker <SMAViewabilityVideoTracking>
{
}

- (id)trackingProtocol;
- (void)trackVideoEventUserClick:(struct CGPoint)arg1;
- (void)trackVideoEventChangeMode:(unsigned long long)arg1;
- (void)trackVideoEventSkip;
- (void)trackVideoEventChangeVolume:(double)arg1;
- (void)trackVideoEventBufferEnd;
- (void)trackVideoEventBufferStart;
- (void)trackVideoEventResume;
- (void)trackVideoEventPause;
- (void)trackVideoEventComplete;
- (void)trackVideoEventQuartileThird;
- (void)trackVideoEventQuartileMid;
- (void)trackVideoEventQuartileFirst;
- (void)trackVideoEventStartWithProperties:(id)arg1;
- (void)trackVideoEventLoadWithProperties:(id)arg1;
- (void)fireImpression;
- (void)updateTrackedView:(id)arg1;
- (id)activeAuditors;
- (void)registerAdView:(id)arg1 auditingBy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

