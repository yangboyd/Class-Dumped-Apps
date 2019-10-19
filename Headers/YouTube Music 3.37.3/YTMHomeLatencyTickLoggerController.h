//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMLatencyLoggerControllerProtocol-Protocol.h"

@class GIMMe, NSString, YTMHomeLatencyTickLogger;

@interface YTMHomeLatencyTickLoggerController : NSObject <YTMLatencyLoggerControllerProtocol>
{
    GIMMe *_gimme;
    YTMHomeLatencyTickLogger *_homeLogger;
}

@property(readonly, nonatomic) YTMHomeLatencyTickLogger *homeLogger; // @synthesize homeLogger=_homeLogger;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)logLatencyActionInfo:(id)arg1;
- (_Bool)isActionFinished;
- (void)logLatencyTick:(int)arg1;
- (void)stopLatencyAction;
- (void)startLatencyAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

