//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMMMapsEngineFeatureResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *featureDetailsArray; // @dynamic featureDetailsArray;
@property(readonly, nonatomic) unsigned long long featureDetailsArray_Count; // @dynamic featureDetailsArray_Count;
@property(nonatomic) _Bool hasHtmlDescription; // @dynamic hasHtmlDescription;
@property(nonatomic) _Bool hasVectordbId; // @dynamic hasVectordbId;
@property(copy, nonatomic) NSString *htmlDescription; // @dynamic htmlDescription;
@property(copy, nonatomic) NSString *vectordbId; // @dynamic vectordbId;

@end

