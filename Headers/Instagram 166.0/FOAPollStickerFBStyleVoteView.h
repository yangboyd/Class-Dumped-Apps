//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FOAPollStickerVoteView.h>

@interface FOAPollStickerFBStyleVoteView : FOAPollStickerVoteView
{
}

- (void)updateLabelWithOption:(id)arg1 optionText:(id)arg2 optionFontSize:(double)arg3;
- (id)attributedStringForPercent:(double)arg1;
- (void)applySharedResultUIWithLeftPercent:(long long)arg1;
- (double)textLabelConstrainSizeScale;
- (struct UIEdgeInsets)optionInsets;
- (id)numberLabelColor;
- (id)createRightGradientLabel;
- (id)createLeftGradientLabel;
- (id)labelFont;
- (void)layoutSubviews;

@end

