//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAssetResourceLoadingRequest, HTTPConnection, NSError, NSObject, NSString, NSURL;
@protocol HTTPResponse;

@protocol MLHLSProxyDelegate <NSObject>
- (void)proxyDidFailWithError:(NSError *)arg1;
- (void)loadMasterPlaylistWithSuccessBlock:(void (^)(MLHLSMasterPlaylist *))arg1;

@optional
@property(readonly, nonatomic) NSString *condensedURLPrefix;
- (_Bool)isExternalPlaybackActive;
- (void)proxyDidRestart;
- (NSObject<HTTPResponse> *)mediaSegmentResponseForConnection:(HTTPConnection *)arg1 itag:(int)arg2 xtags:(NSString *)arg3 segmentIndex:(int)arg4;
- (NSObject<HTTPResponse> *)mediaResponseForConnection:(HTTPConnection *)arg1 itag:(int)arg2 xtags:(NSString *)arg3;
- (void)loadSecureKeyWithLoadingRequest:(AVAssetResourceLoadingRequest *)arg1 completionBlock:(void (^)(NSData *, NSURLResponse *, NSError *))arg2;
- (NSURL *)streamURLWithItag:(int)arg1 xtags:(NSString *)arg2;
- (void)loadMediaPlaylistDataWithItag:(int)arg1 xtags:(NSString *)arg2 completionBlock:(void (^)(NSData *, NSURLResponse *, NSError *))arg3;
- (void)loadMediaPlaylistWithItag:(int)arg1 xtags:(NSString *)arg2 successBlock:(void (^)(MLHLSMediaPlaylist *))arg3;
- (NSString *)expandCondensedURL:(NSString *)arg1 forItag:(int)arg2 xtags:(NSString *)arg3;
@end

