//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface NFIAnimationState : NSObject
{
    NSDictionary *_stateMetadata;
    CDStruct_ba06ad89 _config;
}

@property(retain, nonatomic) NSDictionary *stateMetadata; // @synthesize stateMetadata=_stateMetadata;
@property(nonatomic) CDStruct_ba06ad89 config; // @synthesize config=_config;
- (void).cxx_destruct;
- (CDStruct_ba06ad89)parseConfig;
- (id)animationIdForElementId:(id)arg1 subType:(id)arg2;
- (long long)animationStrategyConversion:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

