//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SCPermissionRequestManager : NSObject
{
    _Bool _currentlyDisplayingPrompt;
    _Bool _isBackgrounded;
    NSMutableArray *_outstandingPermissionRequests;
    NSMutableDictionary *_outstandingCallbacksForPermission;
}

+ (id)getNotificationResponseTokenForCurrentUser;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)_deepestViewController:(id)arg1;
- (long long)_permissionToPermissionPromptType:(unsigned long long)arg1;
- (CDUnknownBlockType)_wrapPermissionRequestWithPrePrompt:(CDUnknownBlockType)arg1 title:(id)arg2 message:(id)arg3 permissionCallback:(CDUnknownBlockType)arg4 referenceToken:(id)arg5 permission:(unsigned long long)arg6;
- (void)_maybeDisplayPrompt;
- (void)_addRequestToQueue:(CDUnknownBlockType)arg1 forPermission:(unsigned long long)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)clearOutstandingPermissionState;
- (void)reportPermissionSettingsIfNecessaryWithSession:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportPermissionSettingsIfNecessaryWithSession:(id)arg1;
- (void)openSystemPermissionSetting:(id)arg1;
- (void)requestMicrophoneWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkMicrophonePermission:(_Bool)arg1 userSession:(id)arg2;
- (void)requestPhotosWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestUserLocationWithCompletionHandler:(CDUnknownBlockType)arg1 userSession:(id)arg2;
- (void)requestNotificationsAndPrepromptWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestNotificationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestCameraWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestContacts;
- (id)init;

@end

