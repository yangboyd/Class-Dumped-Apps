//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers;

@interface YTILiveChatCreatorSupportRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @dynamic buttonsArray;
@property(readonly, nonatomic) unsigned long long buttonsArray_Count; // @dynamic buttonsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

