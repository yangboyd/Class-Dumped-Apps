//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface LSACategory : NSObject
{
    NSString *_categoryId;
    long long _activatorType;
    unsigned long long _trackingRequirements;
    NSString *_initialEffectPath;
    NSDictionary *_activatorParameters;
}

+ (id)defaultActivatorForActivatorType:(long long)arg1;
+ (id)defaultAdditionalCarouselCategoriesForActivatorType:(long long)arg1;
+ (id)defaultCategoryIdForActivatorType:(long long)arg1;
+ (id)defaultCategories;
+ (long long)activatorTypeFromActivatorId:(id)arg1;
+ (id)categoryFromCategoryId:(id)arg1 activatorType:(id)arg2;
+ (double)currentDeviceNaturalFeatureTimeoutFromServer;
@property(copy, nonatomic) NSDictionary *activatorParameters; // @synthesize activatorParameters=_activatorParameters;
@property(readonly, copy, nonatomic) NSString *initialEffectPath; // @synthesize initialEffectPath=_initialEffectPath;
@property(readonly, nonatomic) unsigned long long trackingRequirements; // @synthesize trackingRequirements=_trackingRequirements;
@property(readonly, nonatomic) long long activatorType; // @synthesize activatorType=_activatorType;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (id)initWithId:(id)arg1 activatorType:(long long)arg2 trackingRequirements:(unsigned long long)arg3 initialEffectPath:(id)arg4;

@end

