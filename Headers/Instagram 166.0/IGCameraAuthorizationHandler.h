//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryCameraPermissionViewControllerDelegate-Protocol.h>

@class IGStoryCameraPermissionViewController, NSString, UIViewController;
@protocol IGCameraAuthorizationDelegate;

@interface IGCameraAuthorizationHandler : NSObject <IGStoryCameraPermissionViewControllerDelegate>
{
    IGStoryCameraPermissionViewController *_authorizationViewController;
    UIViewController *_hostingViewController;
    _Bool _authorizationPresent;
    id <IGCameraAuthorizationDelegate> _delegate;
    unsigned long long _authorizedState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long authorizedState; // @synthesize authorizedState=_authorizedState;
@property(readonly, nonatomic, getter=isAuthorizationPresent) _Bool authorizationPresent; // @synthesize authorizationPresent=_authorizationPresent;
@property(nonatomic) __weak id <IGCameraAuthorizationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)permissionViewControllerWillOpenSettings:(id)arg1;
- (void)permissionViewControllerDidCancel:(id)arg1;
- (void)permissionViewControllerDidTapEnableAudio:(id)arg1;
- (void)permissionViewControllerDidTapEnableVideo:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudioAndVideo:(id)arg1;
- (void)permissionViewControllerDidAuthorizeAudio:(id)arg1;
- (void)permissionViewControllerDidAuthorizeVideo:(id)arg1;
- (void)_reloadAuthorizationPresentation;
- (void)cameraDidAppear;
- (void)_dismissAuthorizationIfAppropriate;
- (void)_initializeAuthorizationViewController;
- (void)_presentAuthorizationIfAppropriate;
- (void)_updateAuthorizedState;
- (void)_handleAuthorizationUpdate;
- (void)forceAuthorization;
- (void)cameraWillAppear;
- (void)setAuthorizedState:(unsigned long long)arg1;
- (void)setAuthorizationPresent:(_Bool)arg1;
@property(readonly, nonatomic, getter=isAuthorized) _Bool authorized;
- (id)initWithHostingViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

