//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/IGTVVideoControlsViewDelegate-Protocol.h>

@class IGTVFullscreenVideoCell, IGTVShoppingPinnedProductViewModel;

@protocol IGTVFullscreenVideoCellDelegate <IGTVVideoControlsViewDelegate>
- (void)fullScreenVideoCell:(IGTVFullscreenVideoCell *)arg1 didTapOnShoppingPinnedProductCTA:(IGTVShoppingPinnedProductViewModel *)arg2;
- (void)fullScreenVideoCell:(IGTVFullscreenVideoCell *)arg1 didTapOnShoppingPinnedProductView:(IGTVShoppingPinnedProductViewModel *)arg2;
- (void)fullScreenVideoCellDidTapOnCollectionButton:(IGTVFullscreenVideoCell *)arg1;
- (void)fullScreenVideoCellDidTapOnSeriesButton:(IGTVFullscreenVideoCell *)arg1;
- (void)fullScreenVideoCellDidTapOnEnterLandscapeButton:(IGTVFullscreenVideoCell *)arg1;
- (void)fullScreenVideoCell:(IGTVFullscreenVideoCell *)arg1 didUpdateCellVolume:(double)arg2;
@end

