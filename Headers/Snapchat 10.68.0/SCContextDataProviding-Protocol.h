//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SnapContextCTAData, SnapContextComposerContent, SnapContextInfo, SnapContextSnapIdentity;

@protocol SCContextDataProviding <NSObject>
- (NSString *)groupConversationId;
- (NSString *)replyUsername;
- (SnapContextInfo *)snapContextInfo;
- (SnapContextSnapIdentity *)snapIdentity;

@optional
- (NSString *)singleRecipientDisplayName;
- (NSString *)conversationId;
- (NSString *)teamSnapchatIdHash;
- (long long)mediaType;
- (SnapContextComposerContent *)demoCardsContent;
- (SnapContextCTAData *)demoCTAData;
- (_Bool)hasDemoContent;
@end

