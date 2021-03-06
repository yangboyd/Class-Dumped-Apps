//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIImage;
@protocol IGQuickCamInputAsset;

@interface IGStoryMultiCaptureModel : NSObject
{
    _Bool _highResolutionPreviewsEnabled;
    double _previewDownsampleRate;
    _Bool _isSelected;
    id <IGQuickCamInputAsset> _asset;
    NSMutableArray *_appliedAREffectIDs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *appliedAREffectIDs; // @synthesize appliedAREffectIDs=_appliedAREffectIDs;
@property(readonly, nonatomic) id <IGQuickCamInputAsset> asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, nonatomic) double videoLengthInSeconds;
@property(readonly, nonatomic) _Bool isVideoAsset;
@property(readonly, nonatomic) UIImage *previewImage;
@property(readonly, nonatomic) UIImage *lowResolutionPreviewImage;
- (id)initWithQuickCamInputAsset:(id)arg1 highResolutionPreviewsEnabled:(_Bool)arg2 previewDownsampleRate:(double)arg3;

@end

