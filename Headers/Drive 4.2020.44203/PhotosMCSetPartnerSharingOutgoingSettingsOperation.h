//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCSetPartnerSharingOutgoingSettingsOperation_OutgoingFilter;

@interface PhotosMCSetPartnerSharingOutgoingSettingsOperation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long gracePeriodMs; // @dynamic gracePeriodMs;
@property(nonatomic) _Bool hasGracePeriodMs; // @dynamic hasGracePeriodMs;
@property(nonatomic) _Bool hasOutgoingFilter; // @dynamic hasOutgoingFilter;
@property(retain, nonatomic) PhotosMCSetPartnerSharingOutgoingSettingsOperation_OutgoingFilter *outgoingFilter; // @dynamic outgoingFilter;

@end

