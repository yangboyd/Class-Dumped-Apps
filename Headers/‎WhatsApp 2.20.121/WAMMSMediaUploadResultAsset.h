//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WAMMSMediaUploadResultAsset : NSObject
{
    _Bool _assetChanged;
    NSString *_filePath;
    NSString *_mimeType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) _Bool assetChanged; // @synthesize assetChanged=_assetChanged;
- (id)initWithAssetChanged:(_Bool)arg1 filePath:(id)arg2 mimeType:(id)arg3;

@end

