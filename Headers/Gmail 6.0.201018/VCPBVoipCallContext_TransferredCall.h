//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSString, VPBPhoneNumber;

@interface VCPBVoipCallContext_TransferredCall : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTransferredFrom; // @dynamic hasTransferredFrom;
@property(nonatomic) _Bool hasTransferrer; // @dynamic hasTransferrer;
@property(nonatomic) _Bool hasTransferrerName; // @dynamic hasTransferrerName;
@property(copy, nonatomic) NSString *transferredFrom; // @dynamic transferredFrom;
@property(retain, nonatomic) VPBPhoneNumber *transferrer; // @dynamic transferrer;
@property(copy, nonatomic) NSString *transferrerName; // @dynamic transferrerName;

@end

