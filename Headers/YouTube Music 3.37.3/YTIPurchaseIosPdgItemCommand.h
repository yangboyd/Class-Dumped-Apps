//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIPurchaseIosPdgItemCommand : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appStoreProductId; // @dynamic appStoreProductId;
@property(nonatomic) _Bool hasAppStoreProductId; // @dynamic hasAppStoreProductId;
@property(readonly, nonatomic) int liveChatParamsOneOfCase; // @dynamic liveChatParamsOneOfCase;
@property(copy, nonatomic) NSString *openSuperStickerParams; // @dynamic openSuperStickerParams;
@property(readonly, nonatomic) int productParamsOneOfCase; // @dynamic productParamsOneOfCase;
@property(copy, nonatomic) NSString *purchaseSuperStickerParams; // @dynamic purchaseSuperStickerParams;

@end

