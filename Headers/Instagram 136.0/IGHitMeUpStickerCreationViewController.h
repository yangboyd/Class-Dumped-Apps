//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGStoryStickerEditingViewControllerProtocol-Protocol.h>

@class IGHitMeUpStickerView, IGStoryColorPaletteGradientWheel, IGTapButton, NSArray, NSString, UIView;
@protocol IGHitMeUpStickerCreationViewControllerDelegate;

@interface IGHitMeUpStickerCreationViewController : UIViewController <IGStoryStickerEditingViewControllerProtocol>
{
    _Bool _isStickerNewlyCreated;
    UIView *_dimmingView;
    IGTapButton *_doneButton;
    IGStoryColorPaletteGradientWheel *_colorWheel;
    long long _currentPaletteIndex;
    UIView *_contentWrapperView;
    IGHitMeUpStickerView *_stickerView;
    id <IGHitMeUpStickerCreationViewControllerDelegate> _delegate;
    double _contentRegionCornerRadius;
    struct CGRect _contentRegion;
}

@property(nonatomic) double contentRegionCornerRadius; // @synthesize contentRegionCornerRadius=_contentRegionCornerRadius;
@property(nonatomic) struct CGRect contentRegion; // @synthesize contentRegion=_contentRegion;
@property(nonatomic) __weak id <IGHitMeUpStickerCreationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canRespondToGesture:(id)arg1;
@property(readonly, nonatomic) _Bool shouldDiscardStickerOnDismissal;
@property(readonly, nonatomic) _Bool editableStickerViewIsNewlyCreated;
@property(readonly, nonatomic) double editableStickerScaleWhileEditing;
@property(readonly, nonatomic) UIView *editableStickerView;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (void)_colorWheelChanged:(id)arg1;
- (void)_didDismiss:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithHitMeUpSticker:(id)arg1 isNewlyCreated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

