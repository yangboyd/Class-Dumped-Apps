//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class ACCAnimatedButton, AWEStudioCaptionModel, NSString, UILabel, UITextField;

@interface AWECaptionCollectionViewCell : UICollectionViewCell <UITextFieldDelegate>
{
    _Bool _textHighlighted;
    CDUnknownBlockType _textFieldWillReturnBlock;
    CDUnknownBlockType _audioPlayBlock;
    AWEStudioCaptionModel *_captionModel;
    UILabel *_captionLabel;
    UITextField *_captionTextField;
    ACCAnimatedButton *_audioPlayButton;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool textHighlighted; // @synthesize textHighlighted=_textHighlighted;
@property(retain, nonatomic) ACCAnimatedButton *audioPlayButton; // @synthesize audioPlayButton=_audioPlayButton;
@property(retain, nonatomic) UITextField *captionTextField; // @synthesize captionTextField=_captionTextField;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) AWEStudioCaptionModel *captionModel; // @synthesize captionModel=_captionModel;
@property(copy, nonatomic) CDUnknownBlockType audioPlayBlock; // @synthesize audioPlayBlock=_audioPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType textFieldWillReturnBlock; // @synthesize textFieldWillReturnBlock=_textFieldWillReturnBlock;
- (void)audioPlayButtonClicked;
- (void)configCaptionHighlight:(_Bool)arg1;
- (void)switchEditMode:(_Bool)arg1;
- (void)configCellWithCaptionModel:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChangeValue:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

