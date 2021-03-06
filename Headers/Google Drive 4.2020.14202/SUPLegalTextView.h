//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <drive_extension_framework/NIAttributedLabelDelegate-Protocol.h>
#import <drive_extension_framework/UITextViewDelegate-Protocol.h>

@class NIAttributedLabel, NSString;
@protocol SUPLegalTextViewDelegate;

@interface SUPLegalTextView : UIView <UITextViewDelegate, NIAttributedLabelDelegate>
{
    id <SUPLegalTextViewDelegate> _delegate;
    NIAttributedLabel *_legalTextLabel;
}

@property(retain, nonatomic) NIAttributedLabel *legalTextLabel; // @synthesize legalTextLabel=_legalTextLabel;
@property(nonatomic) __weak id <SUPLegalTextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)attributedLabel:(id)arg1 shouldPresentActionSheet:(id)arg2 withTextCheckingResult:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)layoutSubviews;
- (void)layoutAtBottomOfFrame:(struct CGRect)arg1;
- (id)initWithLegalTextLabel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

