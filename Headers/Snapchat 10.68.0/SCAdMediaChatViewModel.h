//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaChatViewModel.h"

@class SCBaseMediaThumbnailViewModel;
@protocol SCAdShareMediaThumbnailViewModel;

@interface SCAdMediaChatViewModel : SCMediaChatViewModel
{
    _Bool _circularThumbnailViewEnabled;
    SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *_thumbnailViewModel;
}

@property(nonatomic) _Bool circularThumbnailViewEnabled; // @synthesize circularThumbnailViewEnabled=_circularThumbnailViewEnabled;
@property(retain, nonatomic) SCBaseMediaThumbnailViewModel<SCAdShareMediaThumbnailViewModel> *thumbnailViewModel; // @synthesize thumbnailViewModel=_thumbnailViewModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (double)payloadHeight;
- (id)updatedMediaCardViewModel;
- (id)updatedThumbnailViewModel;
- (id)reusableCellIdentifier;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;

@end

