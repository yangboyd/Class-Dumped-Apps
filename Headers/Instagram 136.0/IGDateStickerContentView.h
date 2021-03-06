//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/IGStickerBundleContentViewType-Protocol.h>

@class IGStaticStickerPaddedLabel, NSArray, NSDate, NSString;
@protocol IGStickerBundleContentViewLoadingDelegate;

@interface IGDateStickerContentView : UIView <IGStickerBundleContentViewType>
{
    IGStaticStickerPaddedLabel *_label;
    NSArray *_dateStickerColors;
    id <IGStickerBundleContentViewLoadingDelegate> _loadingDelegate;
    double _playbackTime;
    NSDate *_date;
}

@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) __weak id <IGStickerBundleContentViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
- (void).cxx_destruct;
- (id)outlinePath;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (id)stickerView;
- (id)loggingId;
- (id)currentStickerId;
- (void)selectStickerViewAtIndex:(long long)arg1;
- (long long)numberOfStickers;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

