//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGShareSheetButton, IGStoryPreviewXPostingShareSheetViewCell, UILabel, UITapGestureRecognizer;
@protocol IGStoryPreviewXPostingShareSheetViewDelegate;

@interface IGStoryPreviewXPostingShareSheetView : UIView
{
    UILabel *_headerLabel;
    UIView *_separatorLineView;
    UITapGestureRecognizer *_yourFacebookStoryCellGestureRecognizer;
    IGShareSheetButton *_shareButton;
    IGStoryPreviewXPostingShareSheetViewCell *_yourStoryCell;
    IGStoryPreviewXPostingShareSheetViewCell *_yourFacebookStoryCell;
    id <IGStoryPreviewXPostingShareSheetViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryPreviewXPostingShareSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryPreviewXPostingShareSheetViewCell *yourFacebookStoryCell; // @synthesize yourFacebookStoryCell=_yourFacebookStoryCell;
@property(readonly, nonatomic) IGStoryPreviewXPostingShareSheetViewCell *yourStoryCell; // @synthesize yourStoryCell=_yourStoryCell;
- (void)_yourFacebookStoryCellTapped;
- (void)_shareButtonTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

