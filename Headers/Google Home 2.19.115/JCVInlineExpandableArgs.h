//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class JCVViewArgs, NSMutableArray;

@interface JCVInlineExpandableArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int animationDurationMs; // @dynamic animationDurationMs;
@property(retain, nonatomic) NSMutableArray *contentArray; // @dynamic contentArray;
@property(readonly, nonatomic) unsigned long long contentArray_Count; // @dynamic contentArray_Count;
@property(nonatomic) _Bool expanded; // @dynamic expanded;
@property(nonatomic) _Bool hasAnimationDurationMs; // @dynamic hasAnimationDurationMs;
@property(nonatomic) _Bool hasExpanded; // @dynamic hasExpanded;
@property(nonatomic) _Bool hasViewArgs; // @dynamic hasViewArgs;
@property(retain, nonatomic) JCVViewArgs *viewArgs; // @dynamic viewArgs;

@end

