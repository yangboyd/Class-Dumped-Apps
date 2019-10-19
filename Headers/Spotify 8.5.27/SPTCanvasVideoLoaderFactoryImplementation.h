//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasVideoLoaderFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory;
@protocol SPTCanvasTrackChecker, SPTVideoURLAssetLoader;

@interface SPTCanvasVideoLoaderFactoryImplementation : NSObject <SPTCanvasVideoLoaderFactory>
{
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
    id <SPTVideoURLAssetLoader> _videoAssetLoader;
    SPTDataLoaderFactory *_dataLoaderFactory;
}

@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <SPTVideoURLAssetLoader> videoAssetLoader; // @synthesize videoAssetLoader=_videoAssetLoader;
@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
- (void).cxx_destruct;
- (id)createVideoLoaderForTrack:(id)arg1 videoLoaderType:(long long)arg2;
- (id)initWithCanvasTrackChecker:(id)arg1 videoAssetLoader:(id)arg2 dataLoaderFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

