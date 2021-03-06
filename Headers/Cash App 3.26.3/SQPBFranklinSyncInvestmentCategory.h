//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SQPBCashUiColor;

@interface SQPBFranklinSyncInvestmentCategory : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSString *deprecatedAccentColor;

// Remaining properties
@property(copy, nonatomic) NSString *accentColor; // @dynamic accentColor;
@property(retain, nonatomic) SQPBCashUiColor *categoryColor; // @dynamic categoryColor;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *filterDescription; // @dynamic filterDescription;
@property(nonatomic) _Bool hasAccentColor; // @dynamic hasAccentColor;
@property(nonatomic) _Bool hasCategoryColor; // @dynamic hasCategoryColor;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasFilterDescription; // @dynamic hasFilterDescription;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasParentCategoryToken; // @dynamic hasParentCategoryToken;
@property(nonatomic) _Bool hasPrefixIcon; // @dynamic hasPrefixIcon;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *imageURL; // @dynamic imageURL;
@property(retain, nonatomic) NSMutableArray *investmentEntityTokensArray; // @dynamic investmentEntityTokensArray;
@property(readonly, nonatomic) unsigned long long investmentEntityTokensArray_Count; // @dynamic investmentEntityTokensArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *parentCategoryToken; // @dynamic parentCategoryToken;
@property(nonatomic) int prefixIcon; // @dynamic prefixIcon;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) NSMutableArray *uiFilterGroupTokensArray; // @dynamic uiFilterGroupTokensArray;
@property(readonly, nonatomic) unsigned long long uiFilterGroupTokensArray_Count; // @dynamic uiFilterGroupTokensArray_Count;

@end

