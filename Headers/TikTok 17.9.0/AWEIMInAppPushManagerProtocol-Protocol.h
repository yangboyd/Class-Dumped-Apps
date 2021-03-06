//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol AWEIMInAppPushConfig, AWEIMInAppPushDismissContextProtocol;

@protocol AWEIMInAppPushManagerProtocol <NSObject>
- (void)hideInAppPushView:(_Bool)arg1 context:(id <AWEIMInAppPushDismissContextProtocol>)arg2;
- (_Bool)isInAppPushViewShowing;
- (void)cleanPushTaskWithType:(NSString *)arg1;
- (_Bool)handleInAppPushData:(id)arg1 pushType:(NSString *)arg2;
- (void)registerInAppPushConfig:(id <AWEIMInAppPushConfig>)arg1;
@end

