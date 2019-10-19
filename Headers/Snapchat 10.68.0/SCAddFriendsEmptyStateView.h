//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCSearchActionButton;
@protocol SCAddFriendsEmptyStateViewDelegate, SCImageDownloading;

@interface SCAddFriendsEmptyStateView : UIView <SCViewModelConfigurable>
{
    SCLazy *_descriptionLabel;
    SCLazy *_dynamicGraphicView;
    SCLazy *_staticGraphicView;
    UIView *_graphicView;
    SCSearchActionButton *_addFriendsButton;
    id _viewModel;
    id <SCAddFriendsEmptyStateViewDelegate> _delegate;
    id <SCImageDownloading> _imageDownloader;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(nonatomic) __weak id <SCAddFriendsEmptyStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_didTapAddFriendsButton;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

