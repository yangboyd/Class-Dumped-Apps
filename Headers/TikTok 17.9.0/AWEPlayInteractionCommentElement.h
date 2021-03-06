//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPlayInteractionRightElement.h"

@class AWEFeedVideoButton, AWEPlayInteractionCommentElementViewModel, UIImage;

@interface AWEPlayInteractionCommentElement : AWEPlayInteractionRightElement
{
    _Bool _commentButtonImageFestivalMode;
    AWEFeedVideoButton *_commentButton;
    UIImage *_commentFestivalImage;
    AWEPlayInteractionCommentElementViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AWEPlayInteractionCommentElementViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool commentButtonImageFestivalMode; // @synthesize commentButtonImageFestivalMode=_commentButtonImageFestivalMode;
@property(retain, nonatomic) UIImage *commentFestivalImage; // @synthesize commentFestivalImage=_commentFestivalImage;
@property(retain, nonatomic) AWEFeedVideoButton *commentButton; // @synthesize commentButton=_commentButton;
- (void)updateCommentCount;
- (void)onCommentButtonClicked;
- (id)_getCommentCount;
- (void)updateFestivalCommentButton;
- (void)resetCommentIcon;
- (void)setData:(id)arg1;
- (void)viewDidLoad;
- (void)bindEvent;
- (void)initializeElement;

@end

