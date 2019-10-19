//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, MPPlayableContentManager, YTImageService;

@interface YTContentItemController : NSObject
{
    MPPlayableContentManager *_playableContentManager;
    YTImageService *_imageService;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)artworkForImage:(id)arg1;
- (void)fetchThumbnail:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addArtworkToContentItem:(id)arg1 fromMediaItem:(id)arg2;
- (id)contentItemForMediaItem:(id)arg1;
- (id)initWithPlayableContentManager:(id)arg1;

@end

