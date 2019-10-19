//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSString, YTIDynamicContext, YTIStaticContext;

@interface YTSystemHealthContext : NSObject <YTSystemNotificationsObserver>
{
    YTIStaticContext *_staticContext;
    YTIDynamicContext *_dynamicContext;
    GIMMe *_gimme;
}

+ (id)dpiForDeviceModel;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)setDynamicContextChargingStatus;
- (void)setDynamicContextDeviceRotation;
- (void)setDynamicContextScreenOn;
- (int)getOsSdkVersion;
- (void)batteryStateDidChange;
- (void)appDidChangeDeviceOrientation;
- (void)populateDynamicContextInSysHealthMetricCaptured:(id)arg1;
- (void)populateStaticContextInSysHealthMetricCaptured:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

