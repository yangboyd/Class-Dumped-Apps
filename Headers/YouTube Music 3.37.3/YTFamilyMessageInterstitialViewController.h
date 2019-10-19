//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTFamilyMessageInterstitialViewDelegate-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTFamilyMessageInterstitialView, YTICommand, YTIUnlimitedFamilyMessageInterstitialRenderer;
@protocol YTResponder;

@interface YTFamilyMessageInterstitialViewController : UIViewController <YTFormattedStringLabelDelegate, YTFamilyMessageInterstitialViewDelegate, YTResponder, YTGraftingViewController>
{
    id <YTResponder> _parentResponder;
    YTFamilyMessageInterstitialView *_familyMessageView;
    YTIUnlimitedFamilyMessageInterstitialRenderer *_model;
    YTICommand *_navEndpointForVE;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)navEndpoint;
- (void)tappedButton:(id)arg1 withRenderer:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadWithRenderer:(id)arg1 fromCommand:(id)arg2;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

