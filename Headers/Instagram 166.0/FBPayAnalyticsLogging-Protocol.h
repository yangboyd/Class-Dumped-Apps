//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSString;

@protocol FBPayAnalyticsLogging
- (void)logButtonClicksForFlowStep:(NSString *)arg1 extraData:(NSDictionary *)arg2;
- (void)logFlowStep:(NSString *)arg1 eventName:(NSString *)arg2 extraData:(NSDictionary *)arg3;
- (void)logClickForFlowStep:(NSString *)arg1;
- (void)logCancelForFlowStep:(NSString *)arg1;
- (void)logDisplayForFlowStep:(NSString *)arg1;
- (void)logFailureForFlowStep:(NSString *)arg1;
- (void)logSuccessForFlowStep:(NSString *)arg1;
- (void)logApiInitForFlowStep:(NSString *)arg1;
- (void)logHubOfferEntryPoint;
- (void)logHubLandingOpenTermsAndPrivacy;
- (void)logHubLandingOpenHelpSupport;
- (void)logHubLandingOpenSettings;
- (void)logHubLandingSubscriptionsSeeMore;
- (void)logHubLandingTransactionsSeeMore;
- (void)logHubSettingsQEError;
- (void)logHubSettingsFetchFailure;
- (void)logHubSettingsFetchSuccess;
- (void)logHubSettingsFetchApiInit;
- (void)logHubSettingsDisplay;
- (void)logHubLandingQEError;
- (void)logHubLandingFetchFailure;
- (void)logHubLandingFetchSuccess;
- (void)logHubLandingFetchApiInit;
- (void)logHubLandingDisplay;
@end

