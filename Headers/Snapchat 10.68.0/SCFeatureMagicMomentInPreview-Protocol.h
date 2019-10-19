//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessVideoPlaybackSessionListener-Protocol.h"

@class NSNumber, SCFuture, SCImageProcessLensCommand;
@protocol SCFeatureMagicMomentInPreviewDelegate;

@protocol SCFeatureMagicMomentInPreview <SCImageProcessVideoPlaybackSessionListener>
@property(readonly, nonatomic) _Bool shouldSaveAsCopy;
@property(nonatomic) _Bool toolbarButtonDisabled;
@property(readonly, nonatomic) _Bool magicMomentEnabled;
@property(nonatomic) __weak id <SCFeatureMagicMomentInPreviewDelegate> delegate;
- (void)updateLensProcessingCommand:(SCImageProcessLensCommand *)arg1;
- (SCFuture *)lensDataFuture;
- (SCImageProcessLensCommand *)magicMomentScreenshotCommand;
- (SCImageProcessLensCommand *)magicMomentExportCommand;
- (NSNumber *)magicMomentFrameTime;
@end

