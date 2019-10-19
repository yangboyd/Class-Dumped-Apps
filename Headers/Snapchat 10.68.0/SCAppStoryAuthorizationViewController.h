//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCAppStoryAuthorizationViewDelegate-Protocol.h"

@class NSString, SCAppStoryAuthorizationView, SCNetworkImage, SCSnapKitAppFeatureToggleRequestCoordinator;
@protocol SCImageDownloading;

@interface SCAppStoryAuthorizationViewController : UIViewController <SCAppStoryAuthorizationViewDelegate>
{
    SCAppStoryAuthorizationView *_authorizationView;
    NSString *_title;
    SCNetworkImage *_image;
    long long _ttlInDays;
    NSString *_applicationId;
    id <SCImageDownloading> _imageDownloader;
    CDUnknownBlockType _authorizationCallback;
    SCSnapKitAppFeatureToggleRequestCoordinator *_requestCoordinator;
}

- (void).cxx_destruct;
- (void)_handleLocalUpdateForDidAuthorizeWithIsTurnedOn:(_Bool)arg1;
- (void)_callAuthorizationCallbackWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)appStoryAuthorizationViewHandleDismiss:(id)arg1;
- (void)appStoryAuthorizationViewHandleAuthorize:(id)arg1;
- (void)_dismissWithAnimationAndCompletion:(CDUnknownBlockType)arg1;
- (void)_didTap:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTitle:(id)arg1 image:(id)arg2 ttlInDays:(long long)arg3 applicationId:(id)arg4 userSession:(id)arg5 imageDownloader:(id)arg6 authorizationCallback:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

