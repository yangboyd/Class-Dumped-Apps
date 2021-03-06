//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class PILExtensionHeader, PILPeopleIntelligenceError, PILRequestMetadata, PILResponseMetadata, PILRpcFeatureResponseMetadata, PILRpcMetadata;

@interface PILPeopleIntelligenceExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPeopleIntelligenceError; // @dynamic hasPeopleIntelligenceError;
@property(nonatomic) _Bool hasRequestMetadata; // @dynamic hasRequestMetadata;
@property(nonatomic) _Bool hasResponseMetadata; // @dynamic hasResponseMetadata;
@property(nonatomic) _Bool hasRpcFeatureResponseMetadata; // @dynamic hasRpcFeatureResponseMetadata;
@property(nonatomic) _Bool hasRpcMetadata; // @dynamic hasRpcMetadata;
@property(retain, nonatomic) PILExtensionHeader *header; // @dynamic header;
@property(retain, nonatomic) PILPeopleIntelligenceError *peopleIntelligenceError; // @dynamic peopleIntelligenceError;
@property(retain, nonatomic) PILRequestMetadata *requestMetadata; // @dynamic requestMetadata;
@property(retain, nonatomic) PILResponseMetadata *responseMetadata; // @dynamic responseMetadata;
@property(retain, nonatomic) PILRpcFeatureResponseMetadata *rpcFeatureResponseMetadata; // @dynamic rpcFeatureResponseMetadata;
@property(retain, nonatomic) PILRpcMetadata *rpcMetadata; // @dynamic rpcMetadata;

@end

