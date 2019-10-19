//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLBaseHLSOfflineStreamSelector.h"

@class MLLocalStream, MLStreamStore;

@interface MLHLSLocalStreamSelector : MLBaseHLSOfflineStreamSelector
{
    MLLocalStream *_videoLocalStream;
    MLLocalStream *_audioLocalStream;
    MLStreamStore *_streamStore;
}

- (void).cxx_destruct;
- (id)remoteStreamForLocalStream:(id)arg1;
- (id)localStreamWithItag:(int)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (id)mediaSegmentResponseForConnection:(id)arg1 itag:(int)arg2 xtags:(id)arg3 segmentIndex:(int)arg4;
- (void)loadMediaPlaylistWithItag:(int)arg1 xtags:(id)arg2 successBlock:(CDUnknownBlockType)arg3;
- (id)debugParameters;
- (id)initWithVideoStream:(id)arg1 audioStream:(id)arg2;

@end

