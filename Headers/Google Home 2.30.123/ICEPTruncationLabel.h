//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, QLTComponent;

@interface ICEPTruncationLabel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool alwaysShowsTruncationString; // @dynamic alwaysShowsTruncationString;
@property(nonatomic) _Bool hasAlwaysShowsTruncationString; // @dynamic hasAlwaysShowsTruncationString;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) QLTComponent *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *truncationContentArray; // @dynamic truncationContentArray;
@property(readonly, nonatomic) unsigned long long truncationContentArray_Count; // @dynamic truncationContentArray_Count;

@end

