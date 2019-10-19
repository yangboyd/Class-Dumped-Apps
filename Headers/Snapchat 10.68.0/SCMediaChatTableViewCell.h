//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCActionMenuRenderableCell-Protocol.h"
#import "SCExpandableMediaChatTableCell-Protocol.h"

@class NSString, UIView;
@protocol SCChatSingleMediaThumbnailView;

@interface SCMediaChatTableViewCell : SCSavableItemChatTableViewCell <SCActionMenuRenderableCell, SCExpandableMediaChatTableCell>
{
    UIView *_mediaContainerView;
    UIView<SCChatSingleMediaThumbnailView> *_mediaThumbnailView;
}

@property(readonly, nonatomic) UIView<SCChatSingleMediaThumbnailView> *mediaThumbnailView; // @synthesize mediaThumbnailView=_mediaThumbnailView;
- (void).cxx_destruct;
- (id)thumbnailViewForMediaId:(id)arg1;
- (void)resetWithOriginalContent;
- (id)actionMenuContentViewForIndex:(unsigned long long)arg1;
- (void)configureWithActionMenuVC:(id)arg1;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)willDisplayCell;
- (void)endDisplayingCell;
- (void)loadVideoIfNecessary;
- (void)renderMetadata;
- (void)_updateThumbnailSizeBaseOnViewModel;
- (void)renderPayload;
- (void)layoutSubviews;
- (void)_initMediaViewWithParentVC:(id)arg1 delegate:(id)arg2 thumbnailType:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 parentVC:(id)arg3 delegate:(id)arg4 thumbnailType:(long long)arg5 userSession:(id)arg6;
- (id)mediaViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

