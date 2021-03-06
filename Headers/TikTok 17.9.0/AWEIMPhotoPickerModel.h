//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface AWEIMPhotoPickerModel : NSObject
{
    _Bool _useOriginalImage;
    unsigned long long _maxAssetCount;
    NSMutableArray *_selectedImageIds;
}

+ (id)defaultPickModel;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *selectedImageIds; // @synthesize selectedImageIds=_selectedImageIds;
@property(nonatomic) _Bool useOriginalImage; // @synthesize useOriginalImage=_useOriginalImage;
@property(nonatomic) unsigned long long maxAssetCount; // @synthesize maxAssetCount=_maxAssetCount;
- (void)removeAssetIdentifier:(id)arg1;
- (void)addAssetIdentifier:(id)arg1;
- (unsigned long long)indexOfAssetIdentifier:(id)arg1;
- (_Bool)containerAssetIdentifier:(id)arg1;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) NSArray *assetIdentifiers;
- (id)init;

@end

