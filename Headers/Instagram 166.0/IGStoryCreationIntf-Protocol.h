//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGCameraLoggingContext, IGStoryCreationConfiguration, IGUserSession, UIViewController;
@protocol IGStoryCreationViewControllerType;

@protocol IGStoryCreationIntf <NSObject>
+ (UIViewController<IGStoryCreationViewControllerType> *)storyCreationViewControllerWithUserSession:(IGUserSession *)arg1 presentationStyle:(long long)arg2 configuration:(IGStoryCreationConfiguration *)arg3 loggingContext:(IGCameraLoggingContext *)arg4;
@end

