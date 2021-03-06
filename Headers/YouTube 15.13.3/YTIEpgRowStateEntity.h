//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString;

@interface YTIEpgRowStateEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(nonatomic) long long currentTimeSeconds; // @dynamic currentTimeSeconds;
@property(nonatomic) _Bool disableParallax; // @dynamic disableParallax;
@property(nonatomic) float expansion; // @dynamic expansion;
@property(nonatomic) float expansionHeight; // @dynamic expansionHeight;
@property(nonatomic) _Bool hasCurrentTimeSeconds; // @dynamic hasCurrentTimeSeconds;
@property(nonatomic) _Bool hasDisableParallax; // @dynamic hasDisableParallax;
@property(nonatomic) _Bool hasExpansion; // @dynamic hasExpansion;
@property(nonatomic) _Bool hasExpansionHeight; // @dynamic hasExpansionHeight;
@property(nonatomic) _Bool hasItemCollapsedHeight; // @dynamic hasItemCollapsedHeight;
@property(nonatomic) _Bool hasItemExpandedHeight; // @dynamic hasItemExpandedHeight;
@property(nonatomic) _Bool hasItemHeight; // @dynamic hasItemHeight;
@property(nonatomic) _Bool hasItemWidth; // @dynamic hasItemWidth;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasRowIndex; // @dynamic hasRowIndex;
@property(nonatomic) float itemCollapsedHeight; // @dynamic itemCollapsedHeight;
@property(nonatomic) float itemExpandedHeight; // @dynamic itemExpandedHeight;
@property(nonatomic) float itemHeight; // @dynamic itemHeight;
@property(nonatomic) float itemWidth; // @dynamic itemWidth;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(nonatomic) int rowIndex; // @dynamic rowIndex;

@end

