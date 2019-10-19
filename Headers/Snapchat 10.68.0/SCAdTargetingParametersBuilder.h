//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCAdTargetingParametersBuilder : NSObject
{
    NSString *_inventoryType;
    NSString *_inventoryId;
    long long _adPosition;
    _Bool _isUnskippableAdSlot;
    NSString *_debugAdId;
}

+ (id)adTargetingParametersFromExistingAdTargetingParameters:(id)arg1;
+ (id)adTargetingParameters;
- (void).cxx_destruct;
- (id)withDebugAdId:(id)arg1;
- (id)withIsUnskippableAdSlot:(_Bool)arg1;
- (id)withAdPosition:(long long)arg1;
- (id)withInventoryId:(id)arg1;
- (id)withInventoryType:(id)arg1;
- (id)build;

@end

