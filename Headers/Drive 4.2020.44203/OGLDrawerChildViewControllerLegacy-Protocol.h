//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol OGLDrawerChildViewController;

@protocol OGLDrawerChildViewControllerLegacy

@optional
- (void)drawerChildViewController:(id <OGLDrawerChildViewController>)arg1 updatePreferredHeightWithAnimatedBlock:(void (^)(void))arg2 animationOptions:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(void (^)(void))arg5;
- (void)drawerChildViewControllerAnimationEnd:(id <OGLDrawerChildViewController>)arg1;
- (void)drawerChildViewControllerAnimationStart:(id <OGLDrawerChildViewController>)arg1;
- (void)drawerChildViewControllerFreezeRoundedCornerAndScrollabilityBar:(_Bool)arg1;
- (_Bool)drawerChildViewControllerDrawerShowsElevatedHeader;
@end

