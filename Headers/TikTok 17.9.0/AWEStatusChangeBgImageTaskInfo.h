//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEAssetModel, IESEffectModel, NSString;

@interface AWEStatusChangeBgImageTaskInfo : NSObject
{
    long long _imageType;
    CDUnknownBlockType _completionBlock;
    NSString *_bgEffectModelId;
    NSString *_statusPhotoMaterial;
    IESEffectModel *_bgEffectModel;
    AWEAssetModel *_photoModel;
}

+ (id)createChangeBgImageTaskWithBgImageType:(long long)arg1 bgEffectModelId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) AWEAssetModel *photoModel; // @synthesize photoModel=_photoModel;
@property(retain, nonatomic) IESEffectModel *bgEffectModel; // @synthesize bgEffectModel=_bgEffectModel;
@property(copy, nonatomic) NSString *statusPhotoMaterial; // @synthesize statusPhotoMaterial=_statusPhotoMaterial;
@property(copy, nonatomic) NSString *bgEffectModelId; // @synthesize bgEffectModelId=_bgEffectModelId;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) long long imageType; // @synthesize imageType=_imageType;

@end

