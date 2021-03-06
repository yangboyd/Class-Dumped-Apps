//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGQPActionHandlerProtocol-Protocol.h>

@class IGNotificationSettingsAPIClient, IGUserSession, NSString;
@protocol IGTopMostViewControllerProvider;

@interface IGQPTurnOnPushDirectOnlyActionHandler : NSObject <IGQPActionHandlerProtocol>
{
    IGUserSession *_userSession;
    id <IGTopMostViewControllerProvider> _topMostViewControllerProvider;
    IGNotificationSettingsAPIClient *_pushAPIClient;
}

- (void).cxx_destruct;
- (void)_changingPushSettingsOnAppForegroundIfPermissionGranted;
- (void)_askForSystemPushPermission;
- (void)_askForPushPermission;
- (void)_navigateToPushSettings;
- (void)_presentConfirmationToast;
- (void)_changePushSettings;
- (void)handleActionURL:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 pushAPIClient:(id)arg2 topMostViewControllerProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

