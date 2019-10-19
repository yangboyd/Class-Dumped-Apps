//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterStickerViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, SCOnDemandGeofilterStickerView, UIView;
@protocol SCOnDemandGeofilterSessionProtocol, SCOnDemandGeofilterStickerManagerDelegate;

@interface SCOnDemandGeofilterStickerManager : NSObject <SCOnDemandGeofilterStickerViewDelegate>
{
    UIView *_contentView;
    NSMutableArray *_stickers;
    id <SCOnDemandGeofilterStickerManagerDelegate> _delegate;
    id <SCOnDemandGeofilterSessionProtocol> _geofilterSession;
    SCOnDemandGeofilterStickerView *_activeSticker;
}

@property(retain, nonatomic) SCOnDemandGeofilterStickerView *activeSticker; // @synthesize activeSticker=_activeSticker;
@property(nonatomic) __weak id <SCOnDemandGeofilterSessionProtocol> geofilterSession; // @synthesize geofilterSession=_geofilterSession;
@property(nonatomic) __weak id <SCOnDemandGeofilterStickerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickerRotating:(id)arg1;
- (void)stickerPinching:(id)arg1;
- (void)stickerPanning:(id)arg1;
- (void)stickerTapped:(id)arg1;
- (void)_stickerAdded:(id)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3;
- (void)addSticker:(id)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 thumbnail:(id)arg5;
- (void)showStickers:(_Bool)arg1;
- (void)resetStickerManager;
- (void)deleteActiveSticker;
- (void)presentStickerPickerFromView:(id)arg1 belowSubview:(id)arg2 stickerPickerDismissedHandler:(CDUnknownBlockType)arg3;
- (void)presentStickerPickerFromView:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *stickers;
- (id)initWithContentView:(id)arg1;

@end

