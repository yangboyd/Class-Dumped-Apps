//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue, NSString;

@interface ARIGooglePayEventDetails_PlasticCardTransactionNotificationsOptIn : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARITwoStateSettingValue *accepted; // @dynamic accepted;
@property(copy, nonatomic) NSString *clientTokenId; // @dynamic clientTokenId;
@property(nonatomic) _Bool hasAccepted; // @dynamic hasAccepted;
@property(nonatomic) _Bool hasClientTokenId; // @dynamic hasClientTokenId;

@end

