//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTCreatePlaylistView;

@protocol YTCreatePlaylistViewDelegate <NSObject>
- (void)createPlaylistViewDidCancel:(YTCreatePlaylistView *)arg1;
- (void)createPlaylistView:(YTCreatePlaylistView *)arg1 didCreatePlaylistWithTitle:(NSString *)arg2 privacyStatus:(int)arg3;
@end

