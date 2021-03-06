//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface AWECampaignPendantLimitModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_installTimeLimit;
    NSNumber *_activeTimeLimit;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *activeTimeLimit; // @synthesize activeTimeLimit=_activeTimeLimit;
@property(retain, nonatomic) NSNumber *installTimeLimit; // @synthesize installTimeLimit=_installTimeLimit;
- (_Bool)isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

