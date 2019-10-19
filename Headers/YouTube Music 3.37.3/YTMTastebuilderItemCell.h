//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "YTThumbnailMapping-Protocol.h"

@class MDCInkTouchController, NSString, UIImageView, UITapGestureRecognizer, YTFormattedStringLabel, YTImageView, YTMTastebuilderItem, YTThumbnailController;
@protocol YTMTastebuilderItemCellDelegate, YTResponder;

@interface YTMTastebuilderItemCell : UICollectionViewCell <YTThumbnailMapping>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    YTFormattedStringLabel *_titleLabel;
    UIImageView *_checkOverlay;
    YTThumbnailController *_thumbnailController;
    MDCInkTouchController *_inkTouchController;
    _Bool _liked;
    _Bool _expanded;
    id <YTMTastebuilderItemCellDelegate> _delegate;
    id <YTResponder> _parentResponder;
    YTImageView *_avatar;
    YTMTastebuilderItem *_item;
}

@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic, getter=isLiked) _Bool liked; // @synthesize liked=_liked;
@property(retain, nonatomic) YTMTastebuilderItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) YTImageView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTMTastebuilderItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (id)entry;
- (void)prepareForReuse;
- (void)didTapCell:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

