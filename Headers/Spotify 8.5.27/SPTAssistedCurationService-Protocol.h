//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTAssistedCurationAddTrackHandler, SPTAssistedCurationModel;

@protocol SPTAssistedCurationService <SPTService>
- (id <SPTAssistedCurationAddTrackHandler>)provideAddTrackHandlerForPlaylistURI:(NSURL *)arg1;
- (id <SPTAssistedCurationModel>)provideAssistedCurationModelForPlaylistURI:(NSURL *)arg1;
@end

