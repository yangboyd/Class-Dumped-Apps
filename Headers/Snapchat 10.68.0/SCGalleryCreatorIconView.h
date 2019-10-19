//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCAvatarView, SCGalleryLogger, SCNetworkImageView, SCQueuePerformer, SOJUSnapCreatorAttribution, UIImageView;
@protocol SCGalleryEntry;

@interface SCGalleryCreatorIconView : UIView
{
    id <SCGalleryEntry> _entry;
    SOJUSnapCreatorAttribution *_creatorAttribution;
    _Bool _isFromViewModel;
    SCAvatarView *_avatarView;
    SCNetworkImageView *_logoView;
    UIImageView *_imageView;
    SCGalleryLogger *_galleryLogger;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)_showErrorView;
- (void)_updatePublisherLogo;
- (void)_updateAvatarViewForFriend;
- (void)_updateAvatarViewForGroupChat;
- (void)_updateIconForEntry;
- (void)_updateIconForViewModel;
- (void)prepareForReuse;
- (void)setViewModel:(id)arg1 userSession:(id)arg2;
- (void)setEntry:(id)arg1 snap:(id)arg2 userSession:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

