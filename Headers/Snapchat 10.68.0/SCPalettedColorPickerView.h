//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewToolBarPickerView.h"

@class SCColorPickerDropletView, SCColorPickerGradientView, SCDrawingPaletteModel, SCExpandedButton, SCShapeView, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;
@protocol SCPalettedColorPickerDropletDelegate, SCPalettedColorPickerViewDelegate;

@interface SCPalettedColorPickerView : SCPreviewToolBarPickerView
{
    SCDrawingPaletteModel *_paletteModel;
    SCExpandedButton *_paletteSwitchButton;
    SCColorPickerDropletView *_dotView;
    _Bool _heightExpanded;
    _Bool _colorLocked;
    id <SCPalettedColorPickerViewDelegate> _delegate;
    id <SCPalettedColorPickerDropletDelegate> _dropletDelegate;
    SCColorPickerDropletView *_dropletView;
    unsigned long long _dropletPosition;
    SCShapeView *_backgroundShapeView;
    SCColorPickerGradientView *_gradientColorView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _heightScale;
    double _dropletOffset;
    double _dropletOriginY;
    double _lockedColorOriginY;
    struct CGPoint _beginPanLocation;
    struct CGSize _previousBoundsSize;
    struct CGPoint _previousDropletCenter;
}

+ (id)createDrawingV2ColorPickerViewWithPaletteType:(unsigned long long)arg1;
+ (id)createDefaultColorPickerView;
@property(nonatomic) double lockedColorOriginY; // @synthesize lockedColorOriginY=_lockedColorOriginY;
@property(nonatomic, getter=isColorLocked) _Bool colorLocked; // @synthesize colorLocked=_colorLocked;
@property(nonatomic, getter=isHeightExpanded) _Bool heightExpanded; // @synthesize heightExpanded=_heightExpanded;
@property(nonatomic) double dropletOriginY; // @synthesize dropletOriginY=_dropletOriginY;
@property(nonatomic) double dropletOffset; // @synthesize dropletOffset=_dropletOffset;
@property(nonatomic) double heightScale; // @synthesize heightScale=_heightScale;
@property(nonatomic) struct CGPoint previousDropletCenter; // @synthesize previousDropletCenter=_previousDropletCenter;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(nonatomic) struct CGPoint beginPanLocation; // @synthesize beginPanLocation=_beginPanLocation;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SCColorPickerGradientView *gradientColorView; // @synthesize gradientColorView=_gradientColorView;
@property(retain, nonatomic) SCShapeView *backgroundShapeView; // @synthesize backgroundShapeView=_backgroundShapeView;
@property(nonatomic) unsigned long long dropletPosition; // @synthesize dropletPosition=_dropletPosition;
@property(retain, nonatomic) SCColorPickerDropletView *dropletView; // @synthesize dropletView=_dropletView;
@property(nonatomic) __weak id <SCPalettedColorPickerDropletDelegate> dropletDelegate; // @synthesize dropletDelegate=_dropletDelegate;
@property(nonatomic) __weak id <SCPalettedColorPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCDrawingPaletteModel *paletteModel; // @synthesize paletteModel=_paletteModel;
- (void).cxx_destruct;
- (void)_updateSwitchViewWithPaletteModel;
- (void)_togglePaletteModel;
- (id)pathForLocation:(struct CGPoint)arg1;
- (void)_updatePathsForLocation:(struct CGPoint)arg1;
- (void)animatePathToDefault;
- (void)longPress:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_gradientPickerHitTest:(struct CGPoint)arg1;
- (void)_updateColorWithLocation:(struct CGPoint)arg1 animateDroplet:(_Bool)arg2;
- (void)_updateDropletWithLocation:(struct CGPoint)arg1;
- (_Bool)_canDropletMoveOut;
- (struct CGPoint)locationForColor:(id)arg1;
- (id)colorAtLocation:(struct CGPoint)arg1;
- (double)defaultHeight;
- (double)colorContainerDefaultHeight;
- (double)pathCurveForLocation:(struct CGPoint)arg1;
- (void)setHeightExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)moveDropletToColor:(id)arg1;
- (id)moveDropletToCenter;
- (void)setDropletOriginY:(double)arg1 offsetX:(double)arg2;
- (void)onPostAnimateForViews:(long long)arg1;
- (void)onPreAnimateForViews:(long long)arg1;
- (void)animateViews:(long long)arg1;
- (void)setCompactButtonIcon:(id)arg1;
- (_Bool)shouldExpandHeightWithGesture:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)_containerViewBounds;
- (double)_paletteSwitchButtonHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_createPaletteSwitchButton;
- (void)_setupViewWithColorPickerVersion:(unsigned long long)arg1 paletteType:(unsigned long long)arg2;
- (id)initWithColorPickerVersion:(unsigned long long)arg1 paletteType:(unsigned long long)arg2;

@end

