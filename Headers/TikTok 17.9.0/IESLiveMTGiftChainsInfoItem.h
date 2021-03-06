//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface IESLiveMTGiftChainsInfoItem : MTLModel <MTLJSONSerializing>
{
    NSNumber *_giftId;
    NSString *_giftChainsText;
    NSArray *_giftRules;
    NSString *_rankListUrl;
    NSString *_ruleUrl;
}

+ (id)giftRulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ruleUrl; // @synthesize ruleUrl=_ruleUrl;
@property(retain, nonatomic) NSString *rankListUrl; // @synthesize rankListUrl=_rankListUrl;
@property(retain, nonatomic) NSArray *giftRules; // @synthesize giftRules=_giftRules;
@property(retain, nonatomic) NSString *giftChainsText; // @synthesize giftChainsText=_giftChainsText;
@property(retain, nonatomic) NSNumber *giftId; // @synthesize giftId=_giftId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

