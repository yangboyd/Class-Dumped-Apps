//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapAdsAdPlacement-Protocol.h"

@class NSDictionary, NSString;

@interface SCDiscoverAdPlacement : NSObject <SCSnapAdsAdPlacement>
{
    NSString *_adUnitId;
    NSDictionary *_targetingParams;
    NSString *_adRequestClientId;
}

@property(copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(copy, nonatomic) NSDictionary *targetingParams; // @synthesize targetingParams=_targetingParams;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
- (void).cxx_destruct;
- (id)initWithAdUnitId:(id)arg1 adRequestClientId:(id)arg2 targetingParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

