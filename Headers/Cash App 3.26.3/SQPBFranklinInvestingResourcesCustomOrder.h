//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SQPBCommonMoney;

@interface SQPBFranklinInvestingResourcesCustomOrder : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasOriginalSharePrice; // @dynamic hasOriginalSharePrice;
@property(nonatomic) _Bool hasPeriodToken; // @dynamic hasPeriodToken;
@property(nonatomic) _Bool hasTargetSharePrice; // @dynamic hasTargetSharePrice;
@property(retain, nonatomic) SQPBCommonMoney *originalSharePrice; // @dynamic originalSharePrice;
@property(copy, nonatomic) NSString *periodToken; // @dynamic periodToken;
@property(retain, nonatomic) SQPBCommonMoney *targetSharePrice; // @dynamic targetSharePrice;

@end

