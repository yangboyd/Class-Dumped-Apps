//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class NSError, NSString, SNAnalyticsError, SNAnimationModelProvidingLoggingInfo;
@protocol SNAnimationModelProviding;

@protocol SNAnimationModelProvidingStateListener <NSObject>

@optional
- (void)modelProvider:(id <SNAnimationModelProviding>)arg1 detectError:(SNAnalyticsError *)arg2;
- (void)modelProviderDidCancelAllRequests:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAllExtraAssets:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAllExtraAssets:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAllAssets:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAllAssets:(id <SNAnimationModelProviding>)arg1;
- (void)modelProviderFinishFetchAnimation:(id <SNAnimationModelProviding>)arg1 error:(NSError *)arg2 loadSource:(NSString *)arg3 loggingInfo:(SNAnimationModelProvidingLoggingInfo *)arg4;
- (void)modelProviderStartFetchAnimation:(id <SNAnimationModelProviding>)arg1;
@end

