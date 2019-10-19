//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface TOCropToolbar : UIView
{
    _Bool _clampButtonGlowing;
    _Bool _clampButtonHidden;
    _Bool _rotateCounterclockwiseButtonHidden;
    _Bool _rotateClockwiseButtonHidden;
    _Bool _resetButtonHidden;
    _Bool _reverseContentLayout;
    double _statusBarHeightInset;
    UIButton *_doneTextButton;
    UIButton *_doneIconButton;
    NSString *_doneTextButtonTitle;
    UIButton *_cancelTextButton;
    UIButton *_cancelIconButton;
    NSString *_cancelTextButtonTitle;
    UIButton *_rotateCounterclockwiseButton;
    UIButton *_resetButton;
    UIButton *_clampButton;
    UIButton *_rotateClockwiseButton;
    CDUnknownBlockType _cancelButtonTapped;
    CDUnknownBlockType _doneButtonTapped;
    CDUnknownBlockType _rotateCounterclockwiseButtonTapped;
    CDUnknownBlockType _rotateClockwiseButtonTapped;
    CDUnknownBlockType _clampButtonTapped;
    CDUnknownBlockType _resetButtonTapped;
    UIView *_backgroundView;
    UIButton *_rotateButton;
    struct UIEdgeInsets _backgroundViewOutsets;
}

+ (id)clampImage;
+ (id)resetImage;
+ (id)rotateCWImage;
+ (id)rotateCCWImage;
+ (id)cancelImage;
+ (id)doneImage;
@property(nonatomic) _Bool reverseContentLayout; // @synthesize reverseContentLayout=_reverseContentLayout;
@property(retain, nonatomic) UIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool resetButtonHidden; // @synthesize resetButtonHidden=_resetButtonHidden;
@property(nonatomic) _Bool rotateClockwiseButtonHidden; // @synthesize rotateClockwiseButtonHidden=_rotateClockwiseButtonHidden;
@property(nonatomic) _Bool rotateCounterclockwiseButtonHidden; // @synthesize rotateCounterclockwiseButtonHidden=_rotateCounterclockwiseButtonHidden;
@property(nonatomic) _Bool clampButtonHidden; // @synthesize clampButtonHidden=_clampButtonHidden;
@property(nonatomic) _Bool clampButtonGlowing; // @synthesize clampButtonGlowing=_clampButtonGlowing;
@property(copy, nonatomic) CDUnknownBlockType resetButtonTapped; // @synthesize resetButtonTapped=_resetButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType clampButtonTapped; // @synthesize clampButtonTapped=_clampButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType rotateClockwiseButtonTapped; // @synthesize rotateClockwiseButtonTapped=_rotateClockwiseButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType rotateCounterclockwiseButtonTapped; // @synthesize rotateCounterclockwiseButtonTapped=_rotateCounterclockwiseButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType doneButtonTapped; // @synthesize doneButtonTapped=_doneButtonTapped;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonTapped; // @synthesize cancelButtonTapped=_cancelButtonTapped;
@property(readonly, nonatomic) UIButton *rotateClockwiseButton; // @synthesize rotateClockwiseButton=_rotateClockwiseButton;
@property(retain, nonatomic) UIButton *clampButton; // @synthesize clampButton=_clampButton;
@property(retain, nonatomic) UIButton *resetButton; // @synthesize resetButton=_resetButton;
@property(readonly, nonatomic) UIButton *rotateCounterclockwiseButton; // @synthesize rotateCounterclockwiseButton=_rotateCounterclockwiseButton;
@property(copy, nonatomic) NSString *cancelTextButtonTitle; // @synthesize cancelTextButtonTitle=_cancelTextButtonTitle;
@property(retain, nonatomic) UIButton *cancelIconButton; // @synthesize cancelIconButton=_cancelIconButton;
@property(retain, nonatomic) UIButton *cancelTextButton; // @synthesize cancelTextButton=_cancelTextButton;
@property(copy, nonatomic) NSString *doneTextButtonTitle; // @synthesize doneTextButtonTitle=_doneTextButtonTitle;
@property(retain, nonatomic) UIButton *doneIconButton; // @synthesize doneIconButton=_doneIconButton;
@property(retain, nonatomic) UIButton *doneTextButton; // @synthesize doneTextButton=_doneTextButton;
@property(nonatomic) struct UIEdgeInsets backgroundViewOutsets; // @synthesize backgroundViewOutsets=_backgroundViewOutsets;
@property(nonatomic) double statusBarHeightInset; // @synthesize statusBarHeightInset=_statusBarHeightInset;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *visibleCancelButton;
@property(readonly, nonatomic) struct CGRect doneButtonFrame;
@property(nonatomic) _Bool resetButtonEnabled;
- (void)setRotateCounterClockwiseButtonHidden:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect clampButtonFrame;
- (void)buttonTapped:(id)arg1;
- (void)layoutToolbarButtons:(id)arg1 withSameButtonSize:(struct CGSize)arg2 inContainerRect:(struct CGRect)arg3 horizontally:(_Bool)arg4;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

