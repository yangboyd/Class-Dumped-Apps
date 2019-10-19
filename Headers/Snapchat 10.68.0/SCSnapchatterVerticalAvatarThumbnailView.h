//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCDelegateActionable-Protocol.h"
#import "SCSnapchatterViewModelConfigurable-Protocol.h"

@class NSString, SCLazy, SCSnapchatterAvatarContainerView;
@protocol SCActionHandlingDelegate, SCImageDownloading;

@interface SCSnapchatterVerticalAvatarThumbnailView : UIView <SCSnapchatterViewModelConfigurable, SCDelegateActionable>
{
    SCSnapchatterAvatarContainerView *_avatarContainerView;
    id <SCImageDownloading> _imageDownloader;
    SCLazy *_badgeView;
    SCLazy *_sideActionButton;
    id _viewModel;
    id <SCActionHandlingDelegate> _actionHandlingDelegate;
}

@property(nonatomic) __weak id <SCActionHandlingDelegate> actionHandlingDelegate; // @synthesize actionHandlingDelegate=_actionHandlingDelegate;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_handleButtonTap:(id)arg1;
- (id)_newCircularBadgeView;
- (void)setImageDownloader:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

