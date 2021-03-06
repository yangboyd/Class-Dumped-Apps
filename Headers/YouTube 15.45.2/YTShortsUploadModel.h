//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, NSString, YTEditCameraAsset, YTIVideoShortsCreation, YTUploadEditInstructions;

@interface YTShortsUploadModel : NSObject
{
    _Bool _isShortsEligible;
    GIMMe *_gimme;
    YTEditCameraAsset *_cameraAsset;
    YTIVideoShortsCreation *_creationMetadata;
    YTUploadEditInstructions *_editInstructions;
    long long _uploadSource;
    NSString *_uploadFrontendID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isShortsEligible; // @synthesize isShortsEligible=_isShortsEligible;
@property(readonly, nonatomic) NSString *uploadFrontendID; // @synthesize uploadFrontendID=_uploadFrontendID;
@property(readonly, nonatomic) long long uploadSource; // @synthesize uploadSource=_uploadSource;
@property(readonly, nonatomic) YTUploadEditInstructions *editInstructions; // @synthesize editInstructions=_editInstructions;
@property(readonly, nonatomic) YTIVideoShortsCreation *creationMetadata; // @synthesize creationMetadata=_creationMetadata;
@property(readonly, nonatomic) YTEditCameraAsset *cameraAsset; // @synthesize cameraAsset=_cameraAsset;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (id)initWithCameraAsset:(id)arg1 creationMetadata:(id)arg2 editInstructions:(id)arg3 uploadSource:(long long)arg4 uploadFrontendID:(id)arg5;

@end

