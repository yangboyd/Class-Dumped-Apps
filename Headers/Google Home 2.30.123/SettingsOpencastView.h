//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class ImageBannerView, MDCButton, SwitchWithTitleAndSubtitleView, UITextView;

@interface SettingsOpencastView : UIScrollView
{
    ImageBannerView *_imageBannerView;
    UITextView *_explanationTitleTextView;
    UITextView *_explanationBodyTextView;
    SwitchWithTitleAndSubtitleView *_opencastSwitchView;
    MDCButton *_learnMoreButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MDCButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(readonly, nonatomic) SwitchWithTitleAndSubtitleView *opencastSwitchView; // @synthesize opencastSwitchView=_opencastSwitchView;
- (void)layoutSubviews;
- (id)initWithDevice:(id)arg1 explanationTitle:(id)arg2 explanationBody:(id)arg3 showLearnMore:(_Bool)arg4;

@end

