//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WZSDKMessage.h"

@class NSArray, NSString;

@interface WZAudioPlaylistGroup : WZSDKMessage
{
    NSString *_groupTitle;
    NSArray *_playlists;
}

@property(readonly, copy, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(readonly, copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
- (void).cxx_destruct;
- (id)initWithGroupTitle:(id)arg1 playlists:(id)arg2;

@end

