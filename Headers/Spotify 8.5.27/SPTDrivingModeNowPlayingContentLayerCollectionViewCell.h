//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, SPTDrivingModeTrackInfoView;

@interface SPTDrivingModeNowPlayingContentLayerCollectionViewCell : UICollectionViewCell
{
    SPTDrivingModeTrackInfoView *_trackInfoView;
    NSArray *_windowedContentViewConstraints;
    struct UIEdgeInsets _windowedContentInsets;
}

@property(copy, nonatomic) NSArray *windowedContentViewConstraints; // @synthesize windowedContentViewConstraints=_windowedContentViewConstraints;
@property(retain, nonatomic) SPTDrivingModeTrackInfoView *trackInfoView; // @synthesize trackInfoView=_trackInfoView;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets=_windowedContentInsets;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

