//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHomeMixEvent.h"

@class NSURL;

@interface SPTHomeMixEventTrackSelected : SPTHomeMixEvent
{
    _Bool _explicitTrack;
    NSURL *_trackURI;
    long long _trackIndex;
}

@property(readonly, nonatomic, getter=isExplicitTrack) _Bool explicitTrack; // @synthesize explicitTrack=_explicitTrack;
@property(readonly, nonatomic) long long trackIndex; // @synthesize trackIndex=_trackIndex;
@property(readonly, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
- (void).cxx_destruct;
- (id)initWithTrackURI:(id)arg1 trackIndex:(long long)arg2 explicitTrack:(_Bool)arg3;

@end

