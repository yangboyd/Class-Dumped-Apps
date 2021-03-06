//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL;

@interface AIRCampaignCouponClaimCouponInfo : AIRModel
{
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSString *_currencySymbol;
    NSString *_creditAmount;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *creditAmount; // @synthesize creditAmount=_creditAmount;
@property(readonly, copy, nonatomic) NSString *currencySymbol; // @synthesize currencySymbol=_currencySymbol;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

