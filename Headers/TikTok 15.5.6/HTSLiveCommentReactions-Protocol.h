//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveSpecialPushMessage, NSString;

@protocol HTSLiveCommentReactions <NSObject>

@optional
- (void)bedimCommentButton:(_Bool)arg1;
- (void)lackOfBalance;
- (void)needVerifyPhone;
- (void)clearCommentInputView;
- (void)commentSucceed:(NSString *)arg1 messageID:(unsigned long long)arg2;
- (void)commentBegan;
- (void)showCommentGuide:(HTSLiveSpecialPushMessage *)arg1;
@end

