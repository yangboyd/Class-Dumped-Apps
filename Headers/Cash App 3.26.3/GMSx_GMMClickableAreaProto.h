//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMClickableAreaProto_ClickableIcon, NSMutableArray;

@interface GMSx_GMMClickableAreaProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMClickableAreaProto_ClickableIcon *clickableIcon; // @dynamic clickableIcon;
@property(nonatomic) _Bool hasClickableIcon; // @dynamic hasClickableIcon;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) int type; // @dynamic type;

@end

