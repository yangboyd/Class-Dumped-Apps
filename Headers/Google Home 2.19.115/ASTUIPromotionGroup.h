//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTUIPromotionGroup : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int adType; // @dynamic adType;
@property(copy, nonatomic) NSString *groupTitle; // @dynamic groupTitle;
@property(nonatomic) _Bool hasAdType; // @dynamic hasAdType;
@property(nonatomic) _Bool hasGroupTitle; // @dynamic hasGroupTitle;
@property(nonatomic) _Bool hasShowAdsBadge; // @dynamic hasShowAdsBadge;
@property(retain, nonatomic) NSMutableArray *promotionCardArray; // @dynamic promotionCardArray;
@property(readonly, nonatomic) unsigned long long promotionCardArray_Count; // @dynamic promotionCardArray_Count;
@property(nonatomic) _Bool showAdsBadge; // @dynamic showAdsBadge;

@end

