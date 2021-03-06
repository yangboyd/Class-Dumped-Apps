//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/NSObject-Protocol.h>

@class NSString, NSURL, WAInputTextView, WAUserJID;

@protocol WAInputTextViewDelegate <NSObject>
- (long long)maxAvailableCharactersForInputTextView:(WAInputTextView *)arg1;
- (_Bool)inputTextView:(WAInputTextView *)arg1 canMentionUser:(WAUserJID *)arg2;
- (void)inputTextViewDidStopEditingMention:(WAInputTextView *)arg1;
- (void)inputTextView:(WAInputTextView *)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (_Bool)inputTextViewShouldTrackMentions:(WAInputTextView *)arg1;
- (NSString *)textInputContextIdentifierForInputTextView:(WAInputTextView *)arg1;
- (_Bool)inputTextView:(WAInputTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)inputTextViewDidChange:(WAInputTextView *)arg1;
- (_Bool)inputTextViewShouldEndEditing:(WAInputTextView *)arg1;
- (void)inputTextViewDidEndEditing:(WAInputTextView *)arg1;
- (void)inputTextViewDidBeginEditing:(WAInputTextView *)arg1;
- (_Bool)inputTextViewShouldBeginEditing:(WAInputTextView *)arg1;
- (void)inputTextViewDictationDidEnd:(WAInputTextView *)arg1;
- (void)inputTextView:(WAInputTextView *)arg1 didPasteURL:(NSURL *)arg2;
- (void)inputTextViewDidPasteGIF:(WAInputTextView *)arg1;
- (void)inputTextViewDidPasteImage:(WAInputTextView *)arg1;
- (void)inputTextView:(WAInputTextView *)arg1 needsHeightChangedTo:(double)arg2;
- (double)inputTextViewMaximumHeight:(WAInputTextView *)arg1;
@end

