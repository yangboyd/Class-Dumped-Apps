//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCSCOREConnectionInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *carrier; // @dynamic carrier;
@property(copy, nonatomic) NSString *carrierMccMnc; // @dynamic carrierMccMnc;
@property(copy, nonatomic) NSString *clientIp; // @dynamic clientIp;
@property(nonatomic) int connectionType; // @dynamic connectionType;

@end

