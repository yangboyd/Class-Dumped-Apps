//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ICEPBehavior, ICEPStyle, NSMutableArray, NSString;

@interface ICEPSpacer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ICEPBehavior *behavior; // @dynamic behavior;
@property(nonatomic) _Bool hasBehavior; // @dynamic hasBehavior;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasStyleId; // @dynamic hasStyleId;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(retain, nonatomic) NSMutableArray *layoutConstraintsArray; // @dynamic layoutConstraintsArray;
@property(readonly, nonatomic) unsigned long long layoutConstraintsArray_Count; // @dynamic layoutConstraintsArray_Count;
@property(retain, nonatomic) ICEPStyle *style; // @dynamic style;
@property(copy, nonatomic) NSString *styleId; // @dynamic styleId;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end

