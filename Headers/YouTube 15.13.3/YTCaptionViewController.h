//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/MLCaptionDisplayController-Protocol.h>
#import <Module_Framework/YTCaptionViewProtocol-Protocol.h>

@class GIMMe, NSString, UIView;
@protocol MLCaptionDisplaySettingsProvider, YTCaptionViewProtocol;

@interface YTCaptionViewController : UIViewController <MLCaptionDisplayController, YTCaptionViewProtocol>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(retain, nonatomic) id <MLCaptionDisplaySettingsProvider> captionDisplaySettingsProvider;
@property(nonatomic) double smallLayoutFontSizeMultiplier;
@property(nonatomic) double safeAreaInset;
@property(nonatomic) double captionsRightPadding;
@property(nonatomic) double captionsBottomPadding;
@property(nonatomic) _Bool enlargeCaptionsInFullscreen;
@property(nonatomic) int captionViewLayout;
- (void)addFormat3Captions:(id)arg1;
- (void)clearCaptions;
- (void)setCurrentMediaTime:(CDStruct_d60ef703)arg1;
- (void)setCaptionsHidden:(_Bool)arg1;
@property(readonly, nonatomic) UIView<YTCaptionViewProtocol> *captionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

