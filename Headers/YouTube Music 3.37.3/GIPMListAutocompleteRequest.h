//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPMRequestedClient, GIPRClientVersion, GIPRDeviceIdentifier, GIPRListAutocompleteRequestOptions, NSString;

@interface GIPMListAutocompleteRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPMRequestedClient *client; // @dynamic client;
@property(retain, nonatomic) GIPRClientVersion *clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) GIPRDeviceIdentifier *deviceIdentifier; // @dynamic deviceIdentifier;
@property(nonatomic) _Bool hasClient; // @dynamic hasClient;
@property(nonatomic) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(nonatomic) _Bool hasDeviceIdentifier; // @dynamic hasDeviceIdentifier;
@property(nonatomic) _Bool hasRequestOptions; // @dynamic hasRequestOptions;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) GIPRListAutocompleteRequestOptions *requestOptions; // @dynamic requestOptions;

@end

