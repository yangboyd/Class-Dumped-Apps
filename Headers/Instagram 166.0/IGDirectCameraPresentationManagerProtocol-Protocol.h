//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGStoryCreationViewControllerNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSundialCreationViewControllerNavigationDelegate-Protocol.h>

@class IGStoryCreationConfiguration, NSString, UIView, UIViewController;
@protocol IGDirectCameraPresentationManagerDelegate, IGStoryCreationViewControllerNavigationDelegate, IGSundialCreationViewControllerNavigationDelegate;

@protocol IGDirectCameraPresentationManagerProtocol <IGStoryCreationViewControllerNavigationDelegate, IGSundialCreationViewControllerNavigationDelegate>
- (void)presentWithConfiguration:(IGStoryCreationConfiguration *)arg1 entryPoint:(unsigned long long)arg2 cameraTargetEffectId:(NSString *)arg3 switcherMode:(long long)arg4 delegate:(id <IGDirectCameraPresentationManagerDelegate>)arg5 storyNavigationDelegate:(id <IGStoryCreationViewControllerNavigationDelegate>)arg6 sundialNavigationDelegate:(id <IGSundialCreationViewControllerNavigationDelegate>)arg7 fromController:(UIViewController *)arg8 anchorView:(UIView *)arg9 anchorPointInView:(struct CGPoint)arg10 sourceIdentifier:(id)arg11 animated:(_Bool)arg12 completion:(void (^)(void))arg13;
@end

