//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIGoogleHomeAndWifiTextDetails, ARIIosTextDetails;

@interface ARITextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIGoogleHomeAndWifiTextDetails *googleHomeAndWifiTextDetails; // @dynamic googleHomeAndWifiTextDetails;
@property(nonatomic) _Bool hasGoogleHomeAndWifiTextDetails; // @dynamic hasGoogleHomeAndWifiTextDetails;
@property(nonatomic) _Bool hasIosTextDetails; // @dynamic hasIosTextDetails;
@property(retain, nonatomic) ARIIosTextDetails *iosTextDetails; // @dynamic iosTextDetails;

@end

