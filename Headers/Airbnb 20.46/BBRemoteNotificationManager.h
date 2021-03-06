//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BBRemoteNotificationManager : NSObject
{
}

+ (id)sharedManager;
- (void)clearPushPermissionRequestFlag;
@property(readonly, nonatomic) _Bool hasRequestedPermission;
- (void)setDeviceTokenGCM:(id)arg1;
@property(readonly, nonatomic) NSString *deviceTokenGCM;
- (void)setDeviceTokenAPNS:(id)arg1;
@property(readonly, nonatomic) NSString *deviceTokenAPNS;
- (void)failedToRegisterDeviceTokenWithError:(id)arg1;
- (void)registerDeviceToken:(id)arg1;
- (id)unregisterDeviceToken;
- (void)trackError:(id)arg1;

@end

