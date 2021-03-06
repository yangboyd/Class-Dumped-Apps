//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AriaObjC/ACTEventBase.h>

@class NSString;

@interface ACTSessionMessage : ACTEventBase
{
    int sessionState;
    long long sessionStartTime;
    long long sessionDurationTime;
    int sessionDurationBucket;
    NSString *firstLaunchTimeISO8601;
}

- (void).cxx_destruct;
- (void)populateSemanticProperties:(id)arg1;
- (id)initWithSessionState:(int)arg1 sessionStartTime:(long long)arg2 eventProperties:(id)arg3;
- (int)getSessionDurationFromTime:(long long)arg1;

@end

