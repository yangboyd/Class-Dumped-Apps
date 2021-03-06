//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterMediaAsset.h>

#import <T1Twitter/TIPImageFetchDelegate-Protocol.h>

@class NSString, NSURL;

@interface TFNTwitterMediaAssetRemoteImage : TFNTwitterMediaAsset <TIPImageFetchDelegate>
{
    NSURL *_imageURL;
    struct CGSize _imageDimensions;
}

@property(nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (struct CGSize)estimatedPreviewSizeThatFits:(struct CGSize)arg1;
- (unsigned long long)attachmentType;
- (struct CGSize)assetDimensions;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)renderFinalDataWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderPreviewWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageURL:(id)arg1 dimensions:(struct CGSize)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

