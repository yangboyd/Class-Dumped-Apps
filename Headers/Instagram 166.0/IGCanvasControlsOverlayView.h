//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGStoryAnimatedDiceButton, IGStoryCanvasToolbarConfig, IGTapButton, UILabel, UIView;
@protocol IGCanvasControlsOverlayViewToolbarDelegate;

@interface IGCanvasControlsOverlayView : IGPassthroughView
{
    IGStoryCanvasToolbarConfig *_config;
    UILabel *_seeAllLabel;
    UIView *_bottomButtonTintView;
    IGTapButton *_addStickerButton;
    IGStoryAnimatedDiceButton *_diceButton;
    IGTapButton *_backButton;
    IGTapButton *_settingsButton;
    IGTapButton *_seeAllButton;
    id <IGCanvasControlsOverlayViewToolbarDelegate> _toolbarDelegate;
    struct UIEdgeInsets _contentOverlayInsets;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCanvasControlsOverlayViewToolbarDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(nonatomic) struct UIEdgeInsets contentOverlayInsets; // @synthesize contentOverlayInsets=_contentOverlayInsets;
@property(readonly, nonatomic) IGTapButton *seeAllButton; // @synthesize seeAllButton=_seeAllButton;
@property(readonly, nonatomic) IGTapButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) IGTapButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) IGStoryAnimatedDiceButton *diceButton; // @synthesize diceButton=_diceButton;
@property(readonly, nonatomic) IGTapButton *addStickerButton; // @synthesize addStickerButton=_addStickerButton;
- (void)configureToolbarButton:(id)arg1;
- (void)_toolbarButtonTapped;
- (void)_bottomAccessoryTouchEnded;
- (void)_bottomAccessoryTouched;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

