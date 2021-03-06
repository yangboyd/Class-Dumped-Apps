//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGStickerRemixViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryStickerDeletable-Protocol.h>
#import <FBSharedFramework/IGTappableStickerViewType-Protocol.h>

@class IGGradientView, IGImageStickerView, IGResharedPhotoStickerModel, IGResharedVideoStickerHeaderView, NSString;

@interface IGResharedPhotoStickerView : UIView <IGStickerRemixViewType, IGStickerViewType, IGStoryStickerDeletable, IGTappableStickerViewType>
{
    IGImageStickerView *_imageStickerView;
    IGResharedVideoStickerHeaderView *_headerView;
    IGGradientView *_topGradientView;
    _Bool _isNonDeletable;
    IGResharedPhotoStickerModel *_model;
    double _cornerRadiusWidthRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double cornerRadiusWidthRatio; // @synthesize cornerRadiusWidthRatio=_cornerRadiusWidthRatio;
@property(readonly, nonatomic) IGResharedPhotoStickerModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isNonDeletable; // @synthesize isNonDeletable=_isNonDeletable;
- (id)outlinePath;
- (id)tapModelObject;
- (id)stickerView;
- (id)loggingId;
- (void)updateRemixContentViewWithCornerRadiusWidthRatio:(double)arg1;
- (void)_updateCornerRadiusWithRatio:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) long long imageContentMode;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

