//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRUserLocation_ApiLocation, GTLRUserLocation_ApiReadingInfo, NSArray, NSNumber;

@interface GTLRUserLocation_ApiLocationReading : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)locationReadingFromLocation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *batchDeliveryTimestampMs; // @dynamic batchDeliveryTimestampMs;
@property(retain, nonatomic) NSArray *experiments; // @dynamic experiments;
@property(retain, nonatomic) NSNumber *isOversampled; // @dynamic isOversampled;
@property(retain, nonatomic) GTLRUserLocation_ApiLocation *location; // @dynamic location;
@property(retain, nonatomic) GTLRUserLocation_ApiReadingInfo *readingInfo; // @dynamic readingInfo;
@property(retain, nonatomic) NSNumber *rebootSequence; // @dynamic rebootSequence;
@property(retain, nonatomic) NSNumber *sequence; // @dynamic sequence;
@property(retain, nonatomic) NSNumber *timestampMs; // @dynamic timestampMs;

@end

