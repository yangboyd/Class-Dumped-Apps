//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIClientTaggedPostedText, YTIClientTaggedShareEntity;

@interface YTISharedObjectParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIClientTaggedPostedText *clientTaggedPostedText; // @dynamic clientTaggedPostedText;
@property(retain, nonatomic) YTIClientTaggedShareEntity *clientTaggedShareEntity; // @dynamic clientTaggedShareEntity;
@property(nonatomic) _Bool hasClientTaggedPostedText; // @dynamic hasClientTaggedPostedText;
@property(nonatomic) _Bool hasClientTaggedShareEntity; // @dynamic hasClientTaggedShareEntity;
@property(nonatomic) _Bool hasPostedText; // @dynamic hasPostedText;
@property(nonatomic) _Bool hasSerializedShareEntity; // @dynamic hasSerializedShareEntity;
@property(copy, nonatomic) NSString *postedText; // @dynamic postedText;
@property(copy, nonatomic) NSString *serializedShareEntity; // @dynamic serializedShareEntity;

@end

