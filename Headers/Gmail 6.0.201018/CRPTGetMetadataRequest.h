//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CRPTClientMetadata, NSData, NSMutableArray, NSString;

@interface CRPTGetMetadataRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *appMetadata; // @dynamic appMetadata;
@property(copy, nonatomic) NSString *applicationName; // @dynamic applicationName;
@property(retain, nonatomic) CRPTClientMetadata *clientMetadata; // @dynamic clientMetadata;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(retain, nonatomic) NSMutableArray *getSingleKeyMetadataRequestArray; // @dynamic getSingleKeyMetadataRequestArray;
@property(readonly, nonatomic) unsigned long long getSingleKeyMetadataRequestArray_Count; // @dynamic getSingleKeyMetadataRequestArray_Count;
@property(nonatomic) _Bool hasClientMetadata; // @dynamic hasClientMetadata;

@end

