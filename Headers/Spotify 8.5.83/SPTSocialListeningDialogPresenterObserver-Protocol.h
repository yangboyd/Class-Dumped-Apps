//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTSocialListeningDialogPresenter;

@protocol SPTSocialListeningDialogPresenterObserver <NSObject>

@optional
- (void)presenter:(SPTSocialListeningDialogPresenter *)arg1 didSelectSessionMode:(long long)arg2 forJoinURL:(NSURL *)arg3;
- (void)presenterDidConfirmLeaveSession:(SPTSocialListeningDialogPresenter *)arg1;
- (void)presenterDidConfirmDeleteSession:(SPTSocialListeningDialogPresenter *)arg1;
@end

