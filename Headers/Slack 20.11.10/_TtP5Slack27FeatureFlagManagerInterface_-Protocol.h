//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtP13SlackCoreData35CoreDataFeatureFlagManagerInterface_-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol _TtP5Slack27FeatureFlagManagerInterface_;

@protocol _TtP5Slack27FeatureFlagManagerInterface_ <_TtP13SlackCoreData35CoreDataFeatureFlagManagerInterface_>
+ (id <_TtP5Slack27FeatureFlagManagerInterface_>)globalManager;
- (void)clearCache;
- (void)removeLocalFeatureOverrides;
- (void)removeLocalFeatureOverrideWithIdentifier:(NSString *)arg1;
- (void)setLocalFeatureOverrideWithIdentifier:(NSString *)arg1 value:(_Bool)arg2;
- (void)configureExperimentsFromApiResponse:(NSDictionary *)arg1;
- (void)configureFeatureFlagsFromApiResponse:(NSDictionary *)arg1;
- (NSArray *)allFeatures;
@property(nonatomic, readonly) _Bool shouldUseMobileIA12;
@property(nonatomic, readonly) _Bool shouldUseMobileIA11;
@property(nonatomic, readonly) _Bool isSlackConnectDmEnabled;
@property(nonatomic, readonly) _Bool isStandAloneComposerEnabled;
@property(nonatomic, readonly) _Bool isMobileNavigationUpdateEnabled;
- (_Bool)isFeatureLocalOverride:(NSString *)arg1;
- (_Bool)debug_isFeatureEnabled:(NSString *)arg1 bypassExposureLogging:(_Bool)arg2;
- (_Bool)isFeatureEnabled:(NSString *)arg1;
@end

