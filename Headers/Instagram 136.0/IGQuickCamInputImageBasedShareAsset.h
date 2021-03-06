//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGQuickCamImageType-Protocol.h>
#import <InstagramAppCoreFramework/IGQuickCamInputAsset-Protocol.h>

@class NSArray, NSDictionary, NSString, UIImage;

@interface IGQuickCamInputImageBasedShareAsset : NSObject <IGQuickCamInputAsset, IGQuickCamImageType>
{
    _Bool _isLandscape;
    long long _devicePosition;
    NSString *_deviceType;
    NSString *_deviceUniqueID;
    UIImage *_previewImage;
    NSArray *_backgroundColors;
    long long _assetSource;
    UIImage *_image;
    NSDictionary *_metadata;
    long long _flashMode;
}

@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long assetSource; // @synthesize assetSource=_assetSource;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSArray *backgroundColors; // @synthesize backgroundColors=_backgroundColors;
@property(retain, nonatomic) UIImage *previewImage; // @synthesize previewImage=_previewImage;
@property(readonly, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(readonly, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 assetSource:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

