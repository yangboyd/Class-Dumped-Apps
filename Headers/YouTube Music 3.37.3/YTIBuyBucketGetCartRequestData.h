//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTILiveChatRichMessageInput;

@interface YTIBuyBucketGetCartRequestData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *chatMessageText; // @dynamic chatMessageText;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasPurchasePriceMicros; // @dynamic hasPurchasePriceMicros;
@property(readonly, nonatomic) int inputOneOfCase; // @dynamic inputOneOfCase;
@property(copy, nonatomic) NSData *params; // @dynamic params;
@property(nonatomic) unsigned long long purchasePriceMicros; // @dynamic purchasePriceMicros;
@property(retain, nonatomic) YTILiveChatRichMessageInput *richChatMessage; // @dynamic richChatMessage;
@property(copy, nonatomic) NSString *stickerParams; // @dynamic stickerParams;

@end

