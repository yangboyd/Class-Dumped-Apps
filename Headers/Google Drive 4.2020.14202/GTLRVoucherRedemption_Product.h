//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GTLRObject.h>

@class GTLRDateTime, NSNumber, NSString;

@interface GTLRVoucherRedemption_Product : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) NSNumber *quotaAmountBytes; // @dynamic quotaAmountBytes;
@property(retain, nonatomic) NSNumber *quotaDurationMonths; // @dynamic quotaDurationMonths;
@property(retain, nonatomic) GTLRDateTime *quotaExpirationDate; // @dynamic quotaExpirationDate;
@property(retain, nonatomic) NSNumber *redeemed; // @dynamic redeemed;

@end

