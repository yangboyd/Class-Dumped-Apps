//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOModalView.h"

@class GOOModalViewAction, UIView;
@protocol GOOActionSheetDelegate;

@interface GOOActionSheet : GOOModalView
{
    GOOModalViewAction *_lastAddedAction;
    UIView *_sourceView;
    _Bool _presenting;
    id <GOOActionSheetDelegate> _delegate;
    double _actionButtonsVerticalMargin;
}

+ (id)gooActionSheet_iPad;
+ (id)gooActionSheet_iPhone;
+ (id)gooActionSheet;
+ (id)actionSheet;
@property(nonatomic) double actionButtonsVerticalMargin; // @synthesize actionButtonsVerticalMargin=_actionButtonsVerticalMargin;
@property(nonatomic) __weak id <GOOActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 insets:(struct UIEdgeInsets)arg6 action:(CDUnknownBlockType)arg7;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 accessibilityTraits:(unsigned long long)arg5 action:(CDUnknownBlockType)arg6;
- (void)addTitle:(id)arg1 iconImage:(id)arg2 withStyle:(int)arg3 automationIdentifier:(id)arg4 action:(CDUnknownBlockType)arg5;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withDestructiveAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withDestructiveSelector:(SEL)arg3;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withCancelAction:(CDUnknownBlockType)arg3;
- (void)addTitle:(id)arg1 automationIdentifier:(id)arg2 withCancelSelector:(SEL)arg3;
- (void)configureView;
- (void)keyboardStateChangedWithNotification:(id)arg1;
- (void)addButton:(id)arg1 withAction:(CDUnknownBlockType)arg2;
- (void)addMessage:(id)arg1;
- (void)reposition;
- (_Bool)accessibilityPerformEscape;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)showPointingAtView:(id)arg1 withRect:(struct CGRect)arg2 arrowDirections:(unsigned long long)arg3;
- (void)showPointingAtView:(id)arg1 withOffset:(struct CGSize)arg2 arrowDirections:(unsigned long long)arg3;
- (void)showPointingAtView:(id)arg1 arrowDirections:(unsigned long long)arg2;
- (id)cancelButtonIconImage;
- (void)showWithCancelButton:(_Bool)arg1 cancelAction:(CDUnknownBlockType)arg2;
- (void)showWithCancelButton:(_Bool)arg1;
- (void)show;
- (void)revealDialog;
- (struct CGRect)frameForOnscreenDialog;
- (struct CGRect)frameForOffscreenDialog;
- (struct CGRect)boundsForContainerWithInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)goo_safeAreaInsets;
- (id)rotatingViewForSnapshotRotation:(id)arg1;
- (id)containerViewForSnapshotRotation:(id)arg1;
- (void)setSourceView:(id)arg1;
@property(readonly, nonatomic) __weak UIView *sourceView;
- (void)setLastAddedAction:(id)arg1;
- (id)lastAddedAction;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (id)addAccountImage;
- (id)blankImage;
- (id)checkMarkImage;
- (void)addItemWithTitle:(id)arg1 isSelected:(_Bool)arg2 action:(CDUnknownBlockType)arg3;
- (void)addAddAccountItemWithAuthManager:(id)arg1 addAccountLabel:(id)arg2 fromViewController:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)addAnonymousItemWithLabel:(id)arg1 isSelected:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addEmailItemsFromList:(id)arg1 selectedEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)addEmailItemsFromAuthManager:(id)arg1 selectedEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)showGooActionSheetFromView_iPad:(id)arg1;
- (void)showGooActionSheetFromView_iPhone:(id)arg1;
- (void)showGooActionSheetFromView:(id)arg1;

@end

