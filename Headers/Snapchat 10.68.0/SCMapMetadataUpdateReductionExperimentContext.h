//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCMapMetadataUpdateReductionExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    double _zoomThreshold;
    double _distanceMetersThreshold;
}

@property(readonly, nonatomic) double distanceMetersThreshold; // @synthesize distanceMetersThreshold=_distanceMetersThreshold;
@property(readonly, nonatomic) double zoomThreshold; // @synthesize zoomThreshold=_zoomThreshold;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end

