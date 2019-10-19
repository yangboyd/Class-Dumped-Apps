//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDXPairingCodeTextFieldDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UIImageView, YTColorPalette;
@protocol MDXPairingCodeTextFieldViewDelegate;

@interface MDXPairingCodeTextFieldView : UIView <MDXPairingCodeTextFieldDelegate, UITextFieldDelegate>
{
    YTColorPalette *_colorPalette;
    NSMutableArray *_textFieldArray;
    NSMutableArray *_textFieldUnderLineArray;
    UIActivityIndicatorView *_spinner;
    UIImageView *_pairingCodeValidityIndicator;
    id <MDXPairingCodeTextFieldViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MDXPairingCodeTextFieldViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)pairingCodeFieldWidthFactor;
@property(readonly, nonatomic) NSString *pairingCode;
- (void)hideSpinner;
- (void)showSpinner;
- (void)didPairingCodeChange:(id)arg1;
- (void)clearAllTextFields;
- (void)createPairingCodeValidityIndicator;
- (void)createSpinner;
- (void)createPairingCodeTextFields;
- (void)willDeleteBackwardWhenEmpty:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setPairingCodeStatusValid:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

