//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMLightweightCell.h"

#import "YTEntityStoreObserver-Protocol.h"
#import "YTMMusicPlayButtonViewDelegate-Protocol.h"
#import "YTMOfflineVideoStatusControllerObserver-Protocol.h"
#import "YTReusableView-Protocol.h"

@class CAGradientLayer, NSMutableArray, NSString, QTMButton, UILabel, UITapGestureRecognizer, YTIMusicListItemRenderer, YTImageView, YTMOfflineVideoStatusController, YTMPotentialOverlaysStackView, YTMTransferButton, YTMusicAlbumReleaseEntityModel, YTMusicTrackEntityModel;
@protocol YTMLightweightMusicEntityCellDelegateProtocol;

@interface YTMLightweightMusicListItemCell : YTMLightweightCell <YTEntityStoreObserver, YTMOfflineVideoStatusControllerObserver, YTMMusicPlayButtonViewDelegate, YTReusableView>
{
    YTIMusicListItemRenderer *_renderer;
    YTMusicTrackEntityModel *_trackEntity;
    YTMusicAlbumReleaseEntityModel *_containerEntity;
    UILabel *_titleLabel;
    UILabel *_bylineLabel;
    UILabel *_indexLabel;
    QTMButton *_actionButton;
    NSMutableArray *_subtitleViews;
    YTMOfflineVideoStatusController *_offlineVideoStatusController;
    long long _subtitleInsertIndex;
    _Bool _transferButtonInSubtitle;
    YTImageView *_unplayableIcon;
    UITapGestureRecognizer *_tapRecognizer;
    YTMPotentialOverlaysStackView *_overlaysStackView;
    CAGradientLayer *_backgroundScrim;
    _Bool _thumbnailIconDisplaying;
    id <YTMLightweightMusicEntityCellDelegateProtocol> _delegate;
    YTMTransferButton *_transferButton;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTMTransferButton *transferButton; // @synthesize transferButton=_transferButton;
@property(nonatomic) __weak id <YTMLightweightMusicEntityCellDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapActionButton;
- (void)updateWithOfflineVideoMetadata:(id)arg1;
- (void)insertIconIntoSubtitleIfNecessary:(id)arg1;
- (void)createEntityIcons;
- (void)setBylineLabelTextWithTrack:(id)arg1;
- (_Bool)contentIsPlayable;
- (void)setUpOverlayViews:(id)arg1;
- (void)removeEnclosingItemBackground;
- (void)addEnclosingItemBackground:(id)arg1;
- (void)playButtonViewDidDisplayIcon:(id)arg1;
- (void)playButtonViewDidHideIcon:(id)arg1;
- (void)removePlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (void)addPlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (void)didTapUnplayableCell;
- (void)didUpdateKey:(id)arg1 withUpdateType:(unsigned long long)arg2 previousEntity:(id)arg3 entity:(id)arg4;
- (void)prepareForReuse;
- (void)offlineVideoStatusController:(id)arg1 didDeleteOfflineVideoWithVideoID:(id)arg2;
- (void)offlineVideoStatusController:(id)arg1 didUpdateOfflineVideoMetadata:(id)arg2;
- (id)navigationEndpoint;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

