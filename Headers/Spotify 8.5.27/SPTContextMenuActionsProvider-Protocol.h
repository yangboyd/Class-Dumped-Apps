//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SPTCollectionPlatformFetchOptions, SPTask;
@protocol SPTCollectionPlatform;

@protocol SPTContextMenuActionsProvider <NSObject>
- (NSArray *)actionsForTrackURL:(NSURL *)arg1 name:(NSString *)arg2 metadata:(NSDictionary *)arg3 playable:(_Bool)arg4 imageURL:(NSURL *)arg5 artists:(NSArray *)arg6 albumName:(NSString *)arg7 albumURL:(NSURL *)arg8 viewURL:(NSURL *)arg9 logContext:(NSString *)arg10 contextSourceURL:(NSURL *)arg11;
- (SPTask *)actionForURIs:(NSArray *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 containerURL:(NSURL *)arg4 playlistName:(NSString *)arg5 actionIdentifier:(NSString *)arg6 contextSourceURL:(NSURL *)arg7;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 tracks:(NSArray *)arg4 actionIdentifier:(NSString *)arg5;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 itemName:(NSString *)arg4 creatorName:(NSString *)arg5 sourceName:(NSString *)arg6 imageURL:(NSURL *)arg7 clipboardLinkTitle:(NSString *)arg8 actionIdentifier:(NSString *)arg9;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 contextURL:(NSURL *)arg4 actionIdentifier:(NSString *)arg5;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 actionIdentifier:(NSString *)arg4;
- (SPTask *)offlineSync:(NSURL *)arg1 isOffline:(_Bool)arg2 collectionPlatform:(id <SPTCollectionPlatform>)arg3 collectionOptions:(SPTCollectionPlatformFetchOptions *)arg4 logContext:(NSString *)arg5;
- (SPTask *)viewAlbumWithAlbumURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)viewArtists:(NSArray *)arg1 logContext:(NSString *)arg2;
- (SPTask *)viewArtistWithURL:(NSURL *)arg1 logContext:(NSString *)arg2;
@end

