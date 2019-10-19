//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "YTPageStyling.h"

@class FLXLayout, GIPInputShieldView, NSString, YTISearchBoxRenderer, YTQTMButton, YTSearchBoxTextField, YTSizableView;

@interface YTSearchBoxView : UIView <UITextFieldDelegate, YTPageStyling>
{
    YTQTMButton *_searchButton;
    YTISearchBoxRenderer *_entry;
    FLXLayout *_layout;
    GIPInputShieldView *_dimView;
    UIView *_contentView;
    _Bool _shouldShowCancelButton;
    _Bool _forceShowCancelButton;
    YTQTMButton *_cancelButton;
    id <YTSearchBoxViewDelegate> _delegate;
    YTSearchBoxTextField *_searchLabel;
    YTSizableView *_cancelButtonContainer;
}

@property(retain, nonatomic) YTSizableView *cancelButtonContainer; // @synthesize cancelButtonContainer=_cancelButtonContainer;
@property(retain, nonatomic) YTSearchBoxTextField *searchLabel; // @synthesize searchLabel=_searchLabel;
@property(nonatomic) __weak id <YTSearchBoxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetSearchLabel;
- (void)hideCancelButtonAnimated:(_Bool)arg1;
- (void)showCancelButtonAnimated:(_Bool)arg1;
- (void)didTapCancelButton;
- (void)didSearch;
- (void)loseFocus;
- (void)gainFocus;
- (void)didTapDimView;
- (id)root;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setEntry:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

