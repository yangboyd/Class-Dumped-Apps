//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSCopying-Protocol.h>
#import <Funny/NSObject-Protocol.h>

@class NSNumber, NSString;
@protocol BDMCreative;

@protocol BDMResponse <NSObject, NSCopying>
@property(readonly, copy, nonatomic) id <BDMCreative> creative;
@property(readonly, copy, nonatomic) NSString *cid;
@property(readonly, copy, nonatomic) NSNumber *expirationTime;
@property(readonly, copy, nonatomic) NSString *pricingType;
@property(readonly, copy, nonatomic) NSString *demandSource;
@property(readonly, copy, nonatomic) NSString *currency;
@property(readonly, copy, nonatomic) NSNumber *price;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

