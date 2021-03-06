//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <InstagramAppCoreFramework/IGStoryZoomedOutCollectionViewMediaProtocol-Protocol.h>

@class NSString, UIView;
@protocol IGStoryPlayerMediaViewType;

@interface IGStoryZoomedOutCollectionViewVideoCell : UICollectionViewCell <IGStoryZoomedOutCollectionViewMediaProtocol>
{
    _Bool _audioEnabled;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView; // @synthesize mediaView=_mediaView;
- (void)setupVideoViewWithFrame:(struct CGRect)arg1 userSession:(id)arg2 videoPlayerPreloadPool:(id)arg3 audioEnabled:(_Bool)arg4;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

