//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCAutoAwesomeSourceConstraints;

@interface PhotosMCManualAutoAwesome : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int collectionTypeOrdinal; // @dynamic collectionTypeOrdinal;
@property(nonatomic) _Bool hasCollectionTypeOrdinal; // @dynamic hasCollectionTypeOrdinal;
@property(nonatomic) _Bool hasIconURL; // @dynamic hasIconURL;
@property(nonatomic) _Bool hasRenderFailedMessage; // @dynamic hasRenderFailedMessage;
@property(nonatomic) _Bool hasRenderType; // @dynamic hasRenderType;
@property(nonatomic) _Bool hasRenderTypeOrdinal; // @dynamic hasRenderTypeOrdinal;
@property(nonatomic) _Bool hasShortName; // @dynamic hasShortName;
@property(nonatomic) _Bool hasSourceConstraints; // @dynamic hasSourceConstraints;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *renderFailedMessage; // @dynamic renderFailedMessage;
@property(nonatomic) int renderType; // @dynamic renderType;
@property(nonatomic) int renderTypeOrdinal; // @dynamic renderTypeOrdinal;
@property(copy, nonatomic) NSString *shortName; // @dynamic shortName;
@property(retain, nonatomic) PhotosMCAutoAwesomeSourceConstraints *sourceConstraints; // @dynamic sourceConstraints;

@end

