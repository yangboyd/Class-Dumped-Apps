//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaLayerView-Protocol.h"

@class NSString, SCGrowingButton, UILabel;
@protocol SCOperaInteractionButtonsLayerViewDelegate;

@interface SCOperaInteractionButtonsLayerView : UIView <SCOperaLayerView>
{
    UIView *_containerView;
    SCGrowingButton *_cameraButton;
    SCGrowingButton *_editButton;
    SCGrowingButton *_sendButton;
    SCGrowingButton *_magicMomentButton;
    SCGrowingButton *_boomboxButton;
    SCGrowingButton *_saveButton;
    UILabel *_magicMomentButtonLabel;
    long long _boomboxButtonPosition;
    _Bool _boomboxButtonVisible;
    _Bool _magicMomentEnabled;
    _Bool _showSaveButton;
    id <SCOperaInteractionButtonsLayerViewDelegate> _delegate;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool showSaveButton; // @synthesize showSaveButton=_showSaveButton;
@property(nonatomic) _Bool magicMomentEnabled; // @synthesize magicMomentEnabled=_magicMomentEnabled;
@property(nonatomic) __weak id <SCOperaInteractionButtonsLayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewsVisibilityDuration:(double)arg1;
- (void)_updateMagicMomentButtonState;
- (void)_removeMagicMomentButtonLabel;
- (void)_addMagicMomentButtonLabel;
- (void)_saveButtonPressed:(id)arg1;
- (void)_boomboxButtonPressed:(id)arg1;
- (void)_magicMomentButtonPressed:(id)arg1;
- (void)_sendButtonPressed:(id)arg1;
- (void)_editButtonPressed:(id)arg1;
- (void)_cameraButtonPressed:(id)arg1;
- (id)_saveButton;
- (id)_boomboxButton;
- (id)_magicMoment;
- (id)_sendButton;
- (id)_editButton;
- (id)_cameraButton;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animateBoomboxButton:(_Bool)arg1 duration:(double)arg2 position:(long long)arg3;
- (void)setupViewForLayer:(id)arg1;
- (void)teardown;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

