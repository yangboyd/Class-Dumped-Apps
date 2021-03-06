//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/TOKTextOverlayEditorModelDelegate-Protocol.h>
#import <Module_Framework/TOKTextOverlayEditorTextEditingDelegate-Protocol.h>
#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>
#import <Module_Framework/YTEditFeatureTab-Protocol.h>
#import <Module_Framework/YTEditFeatureUIEnabledState-Protocol.h>
#import <Module_Framework/YTEditTOKColorPickerDelegate-Protocol.h>
#import <Module_Framework/YTEditTOKMenuDelegate-Protocol.h>
#import <Module_Framework/YTEditTextStickerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>
#import <Module_Framework/YTSystemNotificationsObserver-Protocol.h>
#import <Module_Framework/YTUserMentionsViewControllerDelegate-Protocol.h>

@class GIMMe, NSArray, NSString, TOKTextOverlay, UITapGestureRecognizer, UIView, YTEditTOKColorPickerViewController, YTEditTOKMenuViewController, YTEditTOKOverlayView, YTEditTextStickerView, YTEditToolTipView;
@protocol YTEditAddTOKDelegate, YTResponder, YTUserMentionViewControllerProtocol;

@interface YTEditTOKEditorViewController : UIViewController <YTUserMentionsViewControllerDelegate, TOKTextOverlayEditorModelDelegate, TOKTextOverlayEditorTextEditingDelegate, UIGestureRecognizerDelegate, YTEditTOKColorPickerDelegate, YTEditTOKMenuDelegate, YTEditTextStickerDelegate, YTSystemNotificationsObserver, YTEditFeatureTab, YTEditFeatureUIEnabledState, YTResponder>
{
    YTEditTextStickerView *_activeTextSticker;
    TOKTextOverlay *_currentTextModel;
    TOKTextOverlay *_textModelBeforeEditing;
    _Bool _didColorPickerInitialLayout;
    struct CGRect _editingFreeSpace;
    struct CGPoint _lastStickerLocation;
    struct CGAffineTransform _lastStickerTransform;
    double _topOffset;
    double _topInternalOffset;
    CDUnknownBlockType _queuedUpdateBlock;
    double _activeKeyboardHeight;
    _Bool _keyboardShouldDismiss;
    _Bool _keyboardWillDismiss;
    _Bool _restoringKeyboard;
    _Bool _didTextFontSizeChange;
    YTEditTOKOverlayView *_editTextOverlayView;
    UIView *_backgroundView;
    NSString *_currentPostText;
    NSString *_searchedText;
    long long _currentAtLocation;
    UIViewController<YTUserMentionViewControllerProtocol> *_userMentionsVC;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _enableMentionTextSticker;
    YTEditToolTipView *_toolTipView;
    _Bool _shouldAutorotate;
    _Bool _featureEnabled;
    _Bool _keyboardDidShow;
    UIView *_containerView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTEditAddTOKDelegate> _delegate;
    YTEditTOKMenuViewController *_menuViewController;
    YTEditTOKColorPickerViewController *_editColorPickerController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool keyboardDidShow; // @synthesize keyboardDidShow=_keyboardDidShow;
@property(retain, nonatomic) YTEditTOKColorPickerViewController *editColorPickerController; // @synthesize editColorPickerController=_editColorPickerController;
@property(retain, nonatomic) YTEditTOKMenuViewController *menuViewController; // @synthesize menuViewController=_menuViewController;
@property(nonatomic) __weak id <YTEditAddTOKDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool featureEnabled; // @synthesize featureEnabled=_featureEnabled;
@property(nonatomic) _Bool shouldAutorotate; // @synthesize shouldAutorotate=_shouldAutorotate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void)resetUserMentionLocation;
- (void)suggestedUserMentionWasSelected:(id)arg1 channelId:(id)arg2 suggestedRenderer:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (id)descriptionForDisabledState;
- (void)featureIsPresenting:(_Bool)arg1;
@property(readonly, nonatomic) int veType;
- (long long)featurePresentationStyle;
- (id)tabAccessibilityIdentifier;
@property(readonly, nonatomic) NSArray *interactionLoggingButtons;
- (double)desiredViewHeight;
- (id)title;
- (id)imageSelected:(_Bool)arg1;
- (void)textStickerView:(id)arg1 suggestedUserMentionsShown:(_Bool)arg2;
- (void)textStickerViewDidHideUserMentions:(id)arg1;
- (void)textStickerViewDidShowUserMentions:(id)arg1;
- (void)showSuggestedUserMentions:(id)arg1;
- (void)textStickerDidChange:(id)arg1;
- (void)endEditing;
- (void)textMenuDismissButtonPressed;
- (double)calculateCornerRadiusFromTextStyle:(long long)arg1 textSize:(double)arg2;
- (void)updateBackgroundRendererFromTextModel;
- (void)pickedTextFont:(long long)arg1;
- (void)pickedTextAlignment:(long long)arg1;
- (void)pickedTextFontSize:(double)arg1;
- (void)pickedTextColor:(id)arg1 backgroundColor:(id)arg2 withColorPickerMode:(long long)arg3;
- (void)updateTextAndBackgroundColor;
- (void)textColorPickerModeChanged;
- (_Bool)keyboardFrameIsEmpty:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)editViewUpdateRemoveSidePadding:(_Bool)arg1 moveCursor:(_Bool)arg2;
- (void)editViewUpdate;
- (void)requestEditViewUpdateAfterDelay:(double)arg1;
- (void)editViewAnimationUpdateWithKeyboardHeight:(double)arg1;
- (void)animateKeyboardPresentationWithNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)prepareToEndTextEditing:(id)arg1;
- (void)textOverlayEditorDidEndTextEditing:(id)arg1;
- (void)textOverlayEditorWillEndTextEditing:(id)arg1;
- (void)textOverlayEditorDidBeginTextEditing:(id)arg1;
- (void)textOverlayEditorWillBeginTextEditing:(id)arg1;
- (_Bool)textOverlayEditorCanBeginEditing:(id)arg1;
- (void)textOverlayEditorDidMutateModel:(id)arg1;
- (void)restoreLastStickerState;
- (void)saveCurrentStickerState;
- (void)calculateEditingStateWithKeyboardHeight:(double)arg1 suggestingUserMentions:(_Bool)arg2;
- (void)calculateEditingStateWithKeyboardHeight:(double)arg1;
- (_Bool)isInForeground;
- (_Bool)isShown;
- (void)resetPredictiveHighlight;
- (_Bool)handleTapWithTapLocation:(struct CGPoint)arg1 shouldDismiss:(_Bool)arg2;
- (void)tapped:(id)arg1;
- (id)textShadow;
- (void)addTextSticker:(id)arg1;
- (id)newTextStickerViewWithFrame:(struct CGRect)arg1 uiTextOverlay:(id)arg2;
- (id)newTextStickerViewWithText:(id)arg1;
- (void)addUserEduationForMentionsAtPoint:(struct CGPoint)arg1;
- (void)editTextSticker:(id)arg1;
- (id)takeTextSticker;
- (void)endEditingText;
- (void)beginEditingText;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

