//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGTVComposition, IGVideoComposition, PHAsset;

@interface IGTVCreationEntryPointWithAsset : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGVideoComposition *_igtvCameraOrFeed_composition;
    PHAsset *_igtvGallery_asset;
    IGTVComposition *_igtvDrafts_composition;
}

+ (id)igtvGalleryWithAsset:(id)arg1;
+ (id)igtvDraftsWithComposition:(id)arg1;
+ (id)igtvCameraOrFeedWithComposition:(id)arg1;
- (void).cxx_destruct;
- (void)matchIgtvCameraOrFeed:(CDUnknownBlockType)arg1 igtvGallery:(CDUnknownBlockType)arg2 igtvDrafts:(CDUnknownBlockType)arg3;
- (_Bool)matchBooleanIgtvCameraOrFeed:(CDUnknownBlockType)arg1 igtvGallery:(CDUnknownBlockType)arg2 igtvDrafts:(CDUnknownBlockType)arg3;

@end

