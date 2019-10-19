//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensFrameRateProviderProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCFrameRateLogger, SCLensFrameRateCounterListenerAnnouncer;

@interface SCLensLegacyFrameRateCounter : NSObject <SCTraceEnabled, SCLensFrameRateProviderProtocol>
{
    SCFrameRateLogger *_frameRateLogger;
    double _frameProcessingStartTime;
    double _frameProcessingTime;
    double _fps;
    SCLensFrameRateCounterListenerAnnouncer *_listenerAnnouncer;
}

@property(retain, nonatomic) SCLensFrameRateCounterListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
@property(readonly, nonatomic) double fps; // @synthesize fps=_fps;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)_updateFrameRate;
- (void)onFrameProcessingFinished;
- (void)onFrameProcessingStarted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

