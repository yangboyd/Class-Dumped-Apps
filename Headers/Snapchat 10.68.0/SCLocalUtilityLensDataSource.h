//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocalUtilityLensDataSourceProtocol-Protocol.h"

@class NSString, SCLocalUtilityLensAvailabilityConfiguration;

@interface SCLocalUtilityLensDataSource : NSObject <SCLocalUtilityLensDataSourceProtocol>
{
    SCLocalUtilityLensAvailabilityConfiguration *_configuration;
}

- (void).cxx_destruct;
- (id)_utitliyLensWithName:(id)arg1 iconURLString:(id)arg2;
- (id)_photoMathLens;
- (id)_amazonSearchLens;
- (id)_shazamLens;
- (id)lenses;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

