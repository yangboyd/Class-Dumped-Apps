//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface CDRGetSettingsScreenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *baseURL; // @dynamic baseURL;
@property(nonatomic) _Bool hasBaseURL; // @dynamic hasBaseURL;
@property(nonatomic) _Bool hasUnlinkAccountMerchantId; // @dynamic hasUnlinkAccountMerchantId;
@property(nonatomic) _Bool hasUnlinkWalmartAccount; // @dynamic hasUnlinkWalmartAccount;
@property(copy, nonatomic) NSString *unlinkAccountMerchantId; // @dynamic unlinkAccountMerchantId;
@property(nonatomic) _Bool unlinkWalmartAccount; // @dynamic unlinkWalmartAccount;

@end

