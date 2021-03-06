//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStorage, NSDictionary, NSString, UIImage, UITabBarController;

@protocol TikTokStudioMainServiceProtocol <NSObject>
- (UIImage *)awe_mainImageNamed:(NSString *)arg1;
- (UITabBarController *)getTabBarController;
- (_Bool)shouldMarkFromPushForAwemeID:(NSString *)arg1;
- (NSString *)lastPlayingAwemeID;
- (NSDictionary *)currentAwemeLogPb;
- (AWEStorage *)mainStorage;
- (_Bool)isYouthControlEnabled;
- (NSString *)goodsSeedDraftKeyWithTaskID:(NSString *)arg1 userID:(NSString *)arg2;
- (NSString *)goodsDraftKeyWithTaskID:(NSString *)arg1 userID:(NSString *)arg2;
- (_Bool)checkAndShowBindPhoneAlertOnAwemeWithConfirmBlock:(void (^)(void))arg1 cancelBlock:(void (^)(void))arg2;
@end

