//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIRenderer;

@interface YTIPlayerOverlayVideoInteractions_Interaction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *a11YString; // @dynamic a11YString;
@property(nonatomic) _Bool hasA11YString; // @dynamic hasA11YString;
@property(nonatomic) _Bool hasPopUp; // @dynamic hasPopUp;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIRenderer *popUp; // @dynamic popUp;
@property(retain, nonatomic) NSMutableArray *regionsArray; // @dynamic regionsArray;
@property(readonly, nonatomic) unsigned long long regionsArray_Count; // @dynamic regionsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

