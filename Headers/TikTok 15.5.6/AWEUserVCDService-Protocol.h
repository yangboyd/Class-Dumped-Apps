//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class NSString, UIViewController;

@protocol AWEUserVCDService <HTSService>
+ (void)authorizeWithScope:(NSString *)arg1 secondaryUid:(NSString *)arg2 shouldUnbind:(_Bool)arg3 complete:(void (^)(NSError *))arg4;
+ (void)authorizeWithScope:(NSString *)arg1 complete:(void (^)(NSError *))arg2;
+ (_Bool)vcdV2Enable;
+ (UIViewController *)vcdAccountManageVC;
@end

