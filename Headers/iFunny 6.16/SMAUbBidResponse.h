//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/SMAModelObject.h>

@class NSArray, NSNumber, NSString;

@interface SMAUbBidResponse : SMAModelObject
{
    NSString *_ubIdentifier;
    NSArray *_seats;
    NSString *_bidId;
    NSString *_currency;
    NSNumber *_noBiddingReasonValue;
}

+ (id)codingKeys;
@property(retain, nonatomic) NSNumber *noBiddingReasonValue; // @synthesize noBiddingReasonValue=_noBiddingReasonValue;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *bidId; // @synthesize bidId=_bidId;
@property(copy, nonatomic) NSArray *seats; // @synthesize seats=_seats;
@property(copy, nonatomic) NSString *ubIdentifier; // @synthesize ubIdentifier=_ubIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long noBiddingReason;

@end

