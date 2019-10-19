//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPSXTestManager-Protocol.h"

@class NSString, SPTPSXFeatureFlagSignalObserver;
@protocol SPTFeatureFlagFactory, SPTLocalSettings, SPTProductState;

@interface SPTPSXTestManagerImplementation : NSObject <SPTPSXTestManager>
{
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    SPTPSXFeatureFlagSignalObserver *_publicPSXUISignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeePSXUISignalObserver;
    SPTPSXFeatureFlagSignalObserver *_publicPSXFeedbackSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeePSXFeedbackSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_publicPSXCopyDiscoverWeeklySignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeePSXCopyDiscoverWeeklySignalObserver;
    SPTPSXFeatureFlagSignalObserver *_publicMadeForAttributionSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeeMadeForAttributionSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_publicReleaseRadarPSXSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_employeeReleaseRadarPSXSignalObserver;
    SPTPSXFeatureFlagSignalObserver *_encoreTrackRowPSXSignalObserver;
}

@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *encoreTrackRowPSXSignalObserver; // @synthesize encoreTrackRowPSXSignalObserver=_encoreTrackRowPSXSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeeReleaseRadarPSXSignalObserver; // @synthesize employeeReleaseRadarPSXSignalObserver=_employeeReleaseRadarPSXSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicReleaseRadarPSXSignalObserver; // @synthesize publicReleaseRadarPSXSignalObserver=_publicReleaseRadarPSXSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeeMadeForAttributionSignalObserver; // @synthesize employeeMadeForAttributionSignalObserver=_employeeMadeForAttributionSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicMadeForAttributionSignalObserver; // @synthesize publicMadeForAttributionSignalObserver=_publicMadeForAttributionSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeePSXCopyDiscoverWeeklySignalObserver; // @synthesize employeePSXCopyDiscoverWeeklySignalObserver=_employeePSXCopyDiscoverWeeklySignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicPSXCopyDiscoverWeeklySignalObserver; // @synthesize publicPSXCopyDiscoverWeeklySignalObserver=_publicPSXCopyDiscoverWeeklySignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeePSXFeedbackSignalObserver; // @synthesize employeePSXFeedbackSignalObserver=_employeePSXFeedbackSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicPSXFeedbackSignalObserver; // @synthesize publicPSXFeedbackSignalObserver=_publicPSXFeedbackSignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *employeePSXUISignalObserver; // @synthesize employeePSXUISignalObserver=_employeePSXUISignalObserver;
@property(retain, nonatomic) SPTPSXFeatureFlagSignalObserver *publicPSXUISignalObserver; // @synthesize publicPSXUISignalObserver=_publicPSXUISignalObserver;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isEncoreTrackRowsEnabled) _Bool encoreTrackRowsEnabled;
@property(readonly, nonatomic, getter=isCopyDiscoverWeeklyEnabled) _Bool copyDiscoverWeeklyEnabled;
@property(readonly, nonatomic, getter=isFeedbackEnabled) _Bool feedbackEnabled;
@property(readonly, nonatomic, getter=isPersonalisedSetsUIEnabled) _Bool personalisedSetsUIEnabled;
- (void)setUpEncoreTrackRowPSXFeatureFlags;
- (void)setupPSXCopyDiscoverWeeklyFeatureFlags;
- (void)setupPSXFeedbackFeatureFlags;
- (void)setupPSXUIFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 localSettings:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

