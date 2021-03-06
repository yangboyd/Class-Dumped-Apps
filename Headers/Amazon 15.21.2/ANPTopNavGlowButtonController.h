//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANPTopNavButtonController.h"

@class ANPExpandableTouchAreaButton;
@protocol ANPAssetConfig;

@interface ANPTopNavGlowButtonController : ANPTopNavButtonController
{
    ANPExpandableTouchAreaButton *_glowButton;
    id <ANPAssetConfig> _currentGlowButtonIconAsset;
}

@property(retain, nonatomic) id <ANPAssetConfig> currentGlowButtonIconAsset; // @synthesize currentGlowButtonIconAsset=_currentGlowButtonIconAsset;
@property(retain, nonatomic) ANPExpandableTouchAreaButton *glowButton; // @synthesize glowButton=_glowButton;
- (void).cxx_destruct;
- (void)chromeContextWillChange:(id)arg1 previousContext:(id)arg2 chromeContext:(id)arg3;
- (id)createGlowButton:(id)arg1;
- (void)glowButtonTapped:(id)arg1;
- (void)setExtraTouchInsets:(struct UIEdgeInsets)arg1;
- (void)loadView;

@end

