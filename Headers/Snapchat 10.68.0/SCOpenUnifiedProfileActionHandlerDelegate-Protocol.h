//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCDeepLinkURL, SCOpenUnifiedProfileActionHandler, SCSnapchatter;

@protocol SCOpenUnifiedProfileActionHandlerDelegate <NSObject>

@optional
- (void)openUnifiedProfileActionHandlerDidDismissUnifiedProfile:(SCOpenUnifiedProfileActionHandler *)arg1;
- (void)openUnifiedProfileActionHandler:(SCOpenUnifiedProfileActionHandler *)arg1 presentUnifiedProfileForSnapchatterFromFriendActionSheet:(SCSnapchatter *)arg2 sourcePageType:(NSString *)arg3;
- (void)openUnifiedProfileActionHandler:(SCOpenUnifiedProfileActionHandler *)arg1 navigateToChatWithGroupId:(NSString *)arg2 deepLinkURL:(SCDeepLinkURL *)arg3;
- (void)openUnifiedProfileActionHandler:(SCOpenUnifiedProfileActionHandler *)arg1 navigateToChatWithUsername:(NSString *)arg2 deepLinkURL:(SCDeepLinkURL *)arg3;
- (void)openUnifiedProfileActionHandler:(SCOpenUnifiedProfileActionHandler *)arg1 navigateToCameraWithGroupIdFromGroupActionSheet:(NSString *)arg2;
- (void)openUnifiedProfileActionHandler:(SCOpenUnifiedProfileActionHandler *)arg1 navigateToCameraWithSnapchatterFromFriendActionSheet:(SCSnapchatter *)arg2;
@end

