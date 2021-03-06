//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/GIPLocationManagerNotifier-Protocol.h>

@class NSNotificationCenter, NSString;

@interface GIPLocationManagerNotificationCenterNotifier : NSObject <GIPLocationManagerNotifier>
{
    NSNotificationCenter *notificationCenter_;
}

- (void)gipLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)gipLocationManagerDidStopUpdating:(id)arg1;
- (void)gipLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)gipLocationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

