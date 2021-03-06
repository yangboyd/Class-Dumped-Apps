//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class AWECoverTextConfig, AWECoverTextLayoutManager, AWECoverTextPackageInnerView, AWECoverTextStorage, AWECoverTextTextView, NSMutableArray, NSString;

@interface AWECoverTextConfigView : UIView <UITextViewDelegate>
{
    AWECoverTextConfig *_textConfig;
    AWECoverTextPackageInnerView *_packageView;
    CDUnknownBlockType _textDidChangeBlock;
    AWECoverTextTextView *_textView;
    NSMutableArray *_backgroundImageViews;
    AWECoverTextStorage *_textStorage;
    AWECoverTextLayoutManager *_layoutManager;
    AWECoverTextStorage *_placeHolderStorage;
    AWECoverTextLayoutManager *_placeHolderLayoutManger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWECoverTextLayoutManager *placeHolderLayoutManger; // @synthesize placeHolderLayoutManger=_placeHolderLayoutManger;
@property(retain, nonatomic) AWECoverTextStorage *placeHolderStorage; // @synthesize placeHolderStorage=_placeHolderStorage;
@property(retain, nonatomic) AWECoverTextLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) AWECoverTextStorage *textStorage; // @synthesize textStorage=_textStorage;
@property(retain, nonatomic) NSMutableArray *backgroundImageViews; // @synthesize backgroundImageViews=_backgroundImageViews;
@property(retain, nonatomic) AWECoverTextTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType textDidChangeBlock; // @synthesize textDidChangeBlock=_textDidChangeBlock;
@property(nonatomic) __weak AWECoverTextPackageInnerView *packageView; // @synthesize packageView=_packageView;
@property(retain, nonatomic) AWECoverTextConfig *textConfig; // @synthesize textConfig=_textConfig;
- (void)textViewDidChange:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFocused;
- (_Bool)becomeFirstResponder;
- (void)updateViewSizeWithLimitWidth:(double)arg1;
- (void)layoutSubviews;
- (id)initWithPackageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

