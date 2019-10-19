//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser, YTUserDefaults;

@interface YTPushNotificationService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
    YTApiaryResourceParser *_resourceParserGetNotificationSettings;
    YTUserDefaults *_userDefaults;
}

+ (unsigned long long)apnsRegistrationHash:(id)arg1 userID:(id)arg2;
+ (id)notificationRegistrationBlobStoreKey;
@property(retain, nonatomic) YTUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)fillNotificationSettings:(id)arg1 forRegistration:(id)arg2;
- (id)getSetNotificationRegistrationRequestWithDeviceToken:(id)arg1 gcmRegistrationToken:(id)arg2 gcmSenderId:(id)arg3 sawPermissionsDialog:(_Bool)arg4 acceptedPermissionsDialog:(_Bool)arg5 registeredNotificationActions:(_Bool)arg6 ssoService:(id)arg7 enabledTypes:(int)arg8 notificationSettings:(id)arg9;
- (void)makeGetNotificationSettingsRequestWithResponseBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)makeInnerTubeRequestBlobStorage:(id)arg1 hash:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeSetNotificationRegistrationRequestWithRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeSetNotificationRegistrationRequestWithDeviceToken:(id)arg1 gcmRegistrationToken:(id)arg2 gcmSenderId:(id)arg3 sawPermissionsDialog:(_Bool)arg4 acceptedPermissionsDialog:(_Bool)arg5 registeredNotificationActions:(_Bool)arg6 ssoService:(id)arg7 responseBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;
- (id)initWithRequestFactory:(id)arg1 requestor:(id)arg2;
- (id)init;

@end

