//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <Module_Framework/MDCInkTouchControllerDelegate-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTCellActionConfirmationCellProtocol-Protocol.h>
#import <Module_Framework/YTCollectionViewItemPositioningProtocol-Protocol.h>
#import <Module_Framework/YTSlideForActionsViewDelegate-Protocol.h>

@class MDCInkTouchController, NSString, YTSlideForActionsView, YTTouchFeedbackController;

@interface YTCollectionViewCell : UICollectionViewCell <MDCInkTouchControllerDelegate, UIGestureRecognizerDelegate, YTCellActionConfirmationCellProtocol, YTCollectionViewItemPositioningProtocol, YTSlideForActionsViewDelegate>
{
    _Bool _selectable;
    _Bool _highlightable;
    _Bool _inkEnabled;
    _Bool _newTouchFeedbackEnabled;
    int _position;
    int _cellBackgroundStyle;
    int _cellSeparatorStyle;
    YTSlideForActionsView *_slideForActionsView;
    YTTouchFeedbackController *_touchFeedbackController;
    MDCInkTouchController *_inkTouchController;
}

+ (void)setNewTouchFeedbackEnabledOnHome:(_Bool)arg1;
+ (_Bool)isNewTouchFeedbackEnabledOnHome;
+ (void)setNewTouchFeedbackExperimentEnabled:(_Bool)arg1;
+ (_Bool)isNewTouchFeedbackExperimentEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) MDCInkTouchController *inkTouchController; // @synthesize inkTouchController=_inkTouchController;
@property(retain, nonatomic) YTTouchFeedbackController *touchFeedbackController; // @synthesize touchFeedbackController=_touchFeedbackController;
@property(nonatomic, setter=maybeSetNewTouchFeedbackEnabled:) _Bool newTouchFeedbackEnabled; // @synthesize newTouchFeedbackEnabled=_newTouchFeedbackEnabled;
@property(nonatomic) _Bool inkEnabled; // @synthesize inkEnabled=_inkEnabled;
@property(nonatomic, getter=isHighlightable) _Bool highlightable; // @synthesize highlightable=_highlightable;
@property(nonatomic, getter=isSelectable) _Bool selectable; // @synthesize selectable=_selectable;
@property(nonatomic) int cellSeparatorStyle; // @synthesize cellSeparatorStyle=_cellSeparatorStyle;
@property(nonatomic) int cellBackgroundStyle; // @synthesize cellBackgroundStyle=_cellBackgroundStyle;
@property(retain, nonatomic) YTSlideForActionsView *slideForActionsView; // @synthesize slideForActionsView=_slideForActionsView;
@property(nonatomic) int position; // @synthesize position=_position;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)backgroundImageForPosition:(int)arg1 style:(int)arg2 selected:(_Bool)arg3;
- (void)updateBackgroundImage;
- (id)viewForInk;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)allowsReorderingAtPoint:(struct CGPoint)arg1;
- (void)slideForActionsViewDidFinishExitConfirmationModeAnimation;
- (void)slideForActionsViewDidFinishEnterConfirmationModeAnimation;
- (void)slideForActionsViewDidExitConfirmationMode:(id)arg1;
- (void)slideForActionsViewDidEnterConfirmationMode:(id)arg1;
- (void)exitActionConfirmationMode;
- (void)setUpSlideForActions;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isOnHomeFeed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

