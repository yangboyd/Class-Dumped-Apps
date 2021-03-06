//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/SCPOnboardingPresenting-Protocol.h>

@class NSArray, NSString;
@protocol SCPUITheming;

@interface SCPOnboardingPresenter : NSObject <SCPOnboardingPresenting>
{
    NSString *_actionButtonTitle;
    NSString *_lastPageActionButtonTitle;
    NSArray *_steps;
    id <SCPUITheming> _uiTheme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SCPUITheming> uiTheme; // @synthesize uiTheme=_uiTheme;
- (id)stepSubtitleColor;
- (id)stepSubitleFont;
- (id)currentOnboardingStepIndicatorTintColor;
- (id)onboardingStepIndicatorTintColor;
- (id)stepTitleColor;
- (id)stepTitleFont;
- (double)actionButtonCornerRadius;
- (id)actionButtonDisabledBackgroundColor;
- (id)actionButtonHighlightedBackgroundColor;
- (id)actionButtonBackgroundColor;
- (id)actionButtonsSeparatorLineColor;
- (id)navigationBarTintColor;
- (id)surfaceBackgroundColor;
- (id)steps;
- (id)lastPageActionButtonTitle;
- (id)actionButtonTitle;
- (id)actionButtonFont;
- (id)initWithUITheme:(id)arg1 actionButtonTitle:(id)arg2 lastPageActionButtonTitle:(id)arg3 steps:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

