//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFlexboxNode;

@interface YTIFlexboxLayout : GPBMessage
{
}

+ (id)descriptor;
- (id)flexKitLayoutWithVariant:(id)arg1;
- (id)flexKitLayout;

// Remaining properties
@property(nonatomic) _Bool hasNode; // @dynamic hasNode;
@property(retain, nonatomic) YTIFlexboxNode *node; // @dynamic node;
@property(retain, nonatomic) NSMutableArray *stylesArray; // @dynamic stylesArray;
@property(readonly, nonatomic) unsigned long long stylesArray_Count; // @dynamic stylesArray_Count;

@end

