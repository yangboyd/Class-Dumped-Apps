//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC5Slack18FeatureFlagManager.h"

@interface _TtC5Slack18FeatureFlagManager (Slack)
- (void)removeLocalFeatureOverrides;
- (void)removeLocalFeatureOverrideWithIdentifier:(id)arg1;
- (void)setLocalFeatureOverrideWithIdentifier:(id)arg1 value:(_Bool)arg2;
- (void)configureExperimentsFromApiResponse:(id)arg1;
- (void)configureFeatureFlagsFromApiResponse:(id)arg1;
- (id)allFeatures;
- (_Bool)isFeatureLocalOverride:(id)arg1;
- (_Bool)debug_isFeatureEnabled:(id)arg1 bypassExposureLogging:(_Bool)arg2;
- (_Bool)isFeatureEnabled:(id)arg1;
@end

