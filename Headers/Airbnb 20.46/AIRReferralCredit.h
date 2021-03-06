//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCurrencyAmount, AIRDate, NSString, NSURL;

@interface AIRReferralCredit : AIRModel
{
    AIRCurrencyAmount *_amount;
    AIRCurrencyAmount *_balance;
    AIRDate *_expiryDate;
    NSURL *_imageURL;
    NSString *_rawStatus;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *rawStatus; // @synthesize rawStatus=_rawStatus;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) AIRDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *balance; // @synthesize balance=_balance;
@property(readonly, copy, nonatomic) AIRCurrencyAmount *amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) long long status;

@end

