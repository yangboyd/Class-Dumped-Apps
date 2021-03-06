//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUEAccessoryIconButton, SPTPodcastEpisodeFeaturedContentTrackPreviewTagView, UIImageView, UILabel, UIStackView, UIView;
@protocol SPTEpisodeSegmentsEntity, SPTPodcastEpisodeFeaturedContentTrackActionsDelegate;

@interface SPTPodcastEpisodeFeaturedContentTrackListViewCell : UITableViewCell
{
    UIImageView *_trackImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    SPTPodcastEpisodeFeaturedContentTrackPreviewTagView *_previewTagView;
    UIStackView *_subtitleStackView;
    GLUEAccessoryIconButton *_contextMenuButton;
    UIView *_timelineView;
    id <SPTEpisodeSegmentsEntity> _currentEpisodeSegmentsEntity;
    id <SPTPodcastEpisodeFeaturedContentTrackActionsDelegate> _trackActionHandler;
}

+ (long long)numberOfLinesForText:(id)arg1 containerWidth:(double)arg2;
+ (double)sizeForCellWithTitle:(id)arg1 containerWidth:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentTrackActionsDelegate> trackActionHandler; // @synthesize trackActionHandler=_trackActionHandler;
@property(retain, nonatomic) id <SPTEpisodeSegmentsEntity> currentEpisodeSegmentsEntity; // @synthesize currentEpisodeSegmentsEntity=_currentEpisodeSegmentsEntity;
@property(retain, nonatomic) UIView *timelineView; // @synthesize timelineView=_timelineView;
@property(retain, nonatomic) GLUEAccessoryIconButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) UIStackView *subtitleStackView; // @synthesize subtitleStackView=_subtitleStackView;
@property(retain, nonatomic) SPTPodcastEpisodeFeaturedContentTrackPreviewTagView *previewTagView; // @synthesize previewTagView=_previewTagView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *trackImageView; // @synthesize trackImageView=_trackImageView;
- (void)didTouchContextMenu;
- (void)setupConstraints;
- (void)setupLayout;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)subTitle:(id)arg1;
- (id)placeHolder:(_Bool)arg1;
- (void)configureCellForEntity:(id)arg1 isLastVisibleTrack:(_Bool)arg2 imageLoader:(id)arg3 trackActionHandler:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

