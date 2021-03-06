//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGEmojiSkinTonePickerControllerDelegate-Protocol.h>

@class IGEmojiSkinTonePickerController, NSArray, NSString;
@protocol IGCommentEmojiSelectionViewDelegate;

@interface IGCommentEmojiSelectionView : UIView <IGEmojiSkinTonePickerControllerDelegate>
{
    unsigned long long _buttonCountLimit;
    NSArray *_buttons;
    IGEmojiSkinTonePickerController *_skinTonePickerController;
    long long _selectedSkinToneEmojiIndex;
    UIView *_containerView;
    id <IGCommentEmojiSelectionViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCommentEmojiSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)emojiSkinTonePickerControllerDismissViewTapped:(id)arg1;
- (void)emojiSkinTonePickerControllerDidPresent:(id)arg1;
- (void)emojiSkinTonePickerControllerDidDismiss:(id)arg1;
- (void)emojiSkinTonePickerController:(id)arg1 didSelectEmoji:(id)arg2 emojiView:(id)arg3;
- (void)_didTapEmojiButton:(id)arg1;
- (void)_didLongPressWithGestureRecognizer:(id)arg1;
- (void)layoutSubviews;
- (void)configureWithContainerView:(id)arg1 emojis:(id)arg2 buttonCountLimit:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

