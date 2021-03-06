//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GHKWebViewController.h>

@class GHKConfig, GHKReceiverConfig, GHKUserStates, SUPMetricsReporter;
@protocol GHKSurveyContactFormWebViewControllerDelegate;

@interface GHKSurveyContactFormWebViewController : GHKWebViewController
{
    _Bool _showBackButton;
    GHKConfig *_config;
    SUPMetricsReporter *_metricsReporter;
    GHKReceiverConfig *_receiverConfig;
    GHKUserStates *_userStates;
}

+ (id)objectionRequires;
- (void).cxx_destruct;
@property(retain, nonatomic) GHKUserStates *userStates; // @synthesize userStates=_userStates;
@property(retain, nonatomic) GHKReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPMetricsReporter *metricsReporter; // @synthesize metricsReporter=_metricsReporter;
@property(retain, nonatomic) GHKConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool showBackButton; // @synthesize showBackButton=_showBackButton;
- (void)didTapCloseButton;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)GHK_didTapBackButton;
- (void)viewDidLoad;

// Remaining properties
@property(nonatomic) __weak id <GHKSurveyContactFormWebViewControllerDelegate> delegate; // @dynamic delegate;

@end

