//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LPAnalytics.h"

@class NSData, NSDictionary;

@interface LPSegmentAnalytics : LPAnalytics
{
    NSDictionary *_eventMap;
    NSData *_deviceToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(readonly, nonatomic) NSDictionary *eventMap; // @synthesize eventMap=_eventMap;
- (id)getAnonymizedIp;
- (void)receivedRemoteNotification:(id)arg1;
- (void)logRawEvent:(id)arg1 properties:(id)arg2;
- (void)registerDeviceToken:(id)arg1;
- (void)logUser:(id)arg1 properties:(id)arg2;
- (void)logEvent:(long long)arg1 properties:(id)arg2;
- (void)logEvent:(long long)arg1;
- (id)getAutoFillEnabled;
- (id)getCurrentLanguage;
- (void)fetchAnonimizedId;
- (void)initializeWithLaunchOptions:(id)arg1;
- (id)init;

@end

