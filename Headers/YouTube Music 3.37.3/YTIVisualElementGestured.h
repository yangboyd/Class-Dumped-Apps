//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInteractionLoggingClientData, YTIVisualElement;

@interface YTIVisualElementGestured : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInteractionLoggingClientData *clientData; // @dynamic clientData;
@property(copy, nonatomic) NSString *csn; // @dynamic csn;
@property(nonatomic) int gestureType; // @dynamic gestureType;
@property(nonatomic) _Bool hasClientData; // @dynamic hasClientData;
@property(nonatomic) _Bool hasCsn; // @dynamic hasCsn;
@property(nonatomic) _Bool hasGestureType; // @dynamic hasGestureType;
@property(nonatomic) _Bool hasVe; // @dynamic hasVe;
@property(retain, nonatomic) YTIVisualElement *ve; // @dynamic ve;

@end

