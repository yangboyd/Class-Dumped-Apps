//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser;

@interface YTThumbnailService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (void)makeThumbnailRequestWithVideoID:(id)arg1 playlistID:(id)arg2 playlistIndex:(unsigned long long)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeThumbnailRequestWithPlaylistID:(id)arg1 playlistIndex:(unsigned long long)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeThumbnailRequestWithVideoID:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

