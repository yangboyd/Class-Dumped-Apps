//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;

@protocol AWEOpenPushGuideManagerProtocol <NSObject>
+ (void)cleanupAllGuides;
+ (void)updateShowupCondition;
+ (_Bool)checkShowupCondition;
+ (void)showGuideWithTitle:(NSString *)arg1 linkString:(NSString *)arg2 enterFrom:(NSString *)arg3 bottomOffset:(double)arg4 category:(NSString *)arg5 onView:(UIView *)arg6 actionBlock:(void (^)(void))arg7;
+ (void)showGuideWithTitle:(NSString *)arg1 linkString:(NSString *)arg2 enterFrom:(NSString *)arg3 bottomOffset:(double)arg4 category:(NSString *)arg5 actionBlock:(void (^)(void))arg6;
@end

