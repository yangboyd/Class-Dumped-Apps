//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HuluAPI/ConvivaAdProtocol-Protocol.h>

@class IMonitorNotifier, NSString;

@interface ConvivaStreamerProxy : NSObject <ConvivaAdProtocol>
{
    int currentFps;
    int playerEncodedFps;
    NSString *streamUrl;
    long long contentLengthSec;
    long long playheadTimeMs;
    long long bufferLengthMs;
    NSString *streamerFramework;
    NSString *latestStreamUrl;
    IMonitorNotifier *notifier;
    NSString *streamerFrameworkVersion;
}

@property(nonatomic) int playerEncodedFps; // @synthesize playerEncodedFps;
@property(copy, nonatomic) NSString *streamerFrameworkVersion; // @synthesize streamerFrameworkVersion;
@property(readonly, nonatomic) IMonitorNotifier *notifier; // @synthesize notifier;
@property(readonly, nonatomic) NSString *latestStreamUrl; // @synthesize latestStreamUrl;
@property(copy, nonatomic) NSString *streamerFramework; // @synthesize streamerFramework;
@property(nonatomic) long long bufferLengthMs; // @synthesize bufferLengthMs;
@property(nonatomic) long long playheadTimeMs; // @synthesize playheadTimeMs;
@property(nonatomic) long long contentLengthSec; // @synthesize contentLengthSec;
@property(nonatomic) int currentFps; // @synthesize currentFps;
@property(copy, nonatomic) NSString *streamUrl; // @synthesize streamUrl;
- (void).cxx_destruct;
- (void)cleanup;
- (void)updateCurrentPlayerState;
- (void)setMonitoringNotifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

