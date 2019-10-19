//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCStoriesPostingConfiguration, UIViewController;
@protocol SCSendToScreen, UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate;

@protocol SCSendToDelegate <NSObject>
- (void)sendViewController:(UIViewController<SCSendToScreen> *)arg1 sendToRecipients:(NSArray *)arg2 storiesPostingConfig:(SCStoriesPostingConfiguration *)arg3 businessIds:(NSArray *)arg4 mischiefs:(NSArray *)arg5 businessProfiles:(NSArray *)arg6 appStories:(NSArray *)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(NSString *)arg10;

@optional
- (id <UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate>)customDismissalAnimator;
- (void)leftButtonPressed;
- (void)sendViewControllerWillCancel:(UIViewController<SCSendToScreen> *)arg1;
- (NSString *)sendSessionId;
@end

