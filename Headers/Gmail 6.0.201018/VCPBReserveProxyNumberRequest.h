//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class VPBPhoneNumber, VPBProxyAccessibleTarget;

@interface VCPBReserveProxyNumberRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) VPBProxyAccessibleTarget *destination; // @dynamic destination;
@property(retain, nonatomic) VPBPhoneNumber *forwardingPhoneNumber; // @dynamic forwardingPhoneNumber;
@property(nonatomic) _Bool hasDestination; // @dynamic hasDestination;
@property(nonatomic) _Bool hasForwardingPhoneNumber; // @dynamic hasForwardingPhoneNumber;
@property(nonatomic) _Bool hasIsAnonymous; // @dynamic hasIsAnonymous;
@property(nonatomic) _Bool isAnonymous; // @dynamic isAnonymous;

@end

