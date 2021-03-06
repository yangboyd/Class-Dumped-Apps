//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ICEPBehavior, ICEPStyle, NSMutableArray, NSString;

@interface ICEPItemSelectionCarouselArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ICEPBehavior *behavior; // @dynamic behavior;
@property(retain, nonatomic) NSMutableArray *contentArray; // @dynamic contentArray;
@property(readonly, nonatomic) unsigned long long contentArray_Count; // @dynamic contentArray_Count;
@property(nonatomic) _Bool hasBehavior; // @dynamic hasBehavior;
@property(nonatomic) _Bool hasSelectedItemIndex; // @dynamic hasSelectedItemIndex;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(retain, nonatomic) NSMutableArray *layoutConstraintsArray; // @dynamic layoutConstraintsArray;
@property(readonly, nonatomic) unsigned long long layoutConstraintsArray_Count; // @dynamic layoutConstraintsArray_Count;
@property(nonatomic) unsigned int selectedItemIndex; // @dynamic selectedItemIndex;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) ICEPStyle *style; // @dynamic style;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;

@end

