//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMEmoticonKeyBoardDelegate-Protocol.h"

@class AWEGrowingTextView, NSString;
@protocol AWEEmoticonKeyboardHelperDelegate, AWETextInputControllerProtocol;

@interface AWEEmoticonKeyboardHelper : NSObject <AWEIMEmoticonKeyBoardDelegate>
{
    AWEGrowingTextView *_textView;
    id <AWETextInputControllerProtocol> _textInputController;
    id <AWEEmoticonKeyboardHelperDelegate> _delegate;
}

+ (_Bool)textInput:(id)arg1 shouldDeleteTextInRange:(struct _NSRange)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <AWEEmoticonKeyboardHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <AWETextInputControllerProtocol> textInputController; // @synthesize textInputController=_textInputController;
@property(retain, nonatomic) AWEGrowingTextView *textView; // @synthesize textView=_textView;
- (void)appendSysEmojiWithTitle:(id)arg1;
- (id)getPlainText;
- (void)emoticonViewDidTappedSearchItem:(id)arg1;
- (void)emoticonViewDidSendText:(id)arg1;
- (void)emoticonViewDidSelectDelete:(id)arg1;
- (void)emoticonView:(id)arg1 didSelectEmoticon:(id)arg2 theme:(id)arg3 themeView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

