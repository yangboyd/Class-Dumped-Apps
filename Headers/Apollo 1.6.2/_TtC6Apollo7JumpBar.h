//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@interface _TtC6Apollo7JumpBar : UIControl
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: nameLabel
    // Error parsing type: , name: arrowImageView
    // Error parsing type: , name: secondaryLabel
    // Error parsing type: , name: searchTextField
    // Error parsing type: , name: suggestionLabel
    // Error parsing type: , name: nameLabelCenterYConstraint
    // Error parsing type: , name: spacing
    // Error parsing type: , name: showSuggestions
    // Error parsing type: , name: displayingMultireddit
    // Error parsing type: , name: jumpBarState
    // Error parsing type: , name: dropDownTitle
}

- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)searchTextFieldChanged:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;

@end

