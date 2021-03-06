//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyleProvider-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>

@class GIMMe, NSString, YTFormattedStringLabel, YTIUnlimitedFamilyMessageInterstitialRenderer, YTImageView, YTQTMButton, YTThumbnailController;
@protocol YTFamilyMessageInterstitialViewDelegate, YTFormattedStringLabelDelegate;

@interface YTFamilyMessageInterstitialView : UIView <YTPageStyling, YTPageStyleProvider>
{
    YTImageView *_thumbnailView;
    YTFormattedStringLabel *_title;
    YTFormattedStringLabel *_content;
    YTFormattedStringLabel *_footer;
    UIView *_buttonBackgroundView;
    YTThumbnailController *_thumbnailController;
    GIMMe *_gimme;
    YTQTMButton *_actionButton;
    YTQTMButton *_dismissButton;
    YTIUnlimitedFamilyMessageInterstitialRenderer *_renderer;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    id <YTFamilyMessageInterstitialViewDelegate> _buttonDelegate;
}

@property(nonatomic) __weak id <YTFamilyMessageInterstitialViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
@property(retain, nonatomic) YTIUnlimitedFamilyMessageInterstitialRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) YTQTMButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (double)availableSubviewWidth;
- (id)formattedStringLabel;
- (id)footer;
- (id)content;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)didTapDismissButton;
- (void)didTapActionButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

