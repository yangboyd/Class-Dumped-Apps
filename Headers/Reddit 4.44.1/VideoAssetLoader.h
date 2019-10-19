//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Media, MediaModel, NSString;
@protocol VideoAssetLoaderDelegate;

@interface VideoAssetLoader : NSObject
{
    _Bool _isReady;
    id <VideoAssetLoaderDelegate> _delegate;
    unsigned long long _state;
    Media *_media;
    MediaModel *_mediaModel;
    NSString *_mediaURLString;
    NSString *_downloadToken;
}

@property(copy, nonatomic) NSString *downloadToken; // @synthesize downloadToken=_downloadToken;
@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(retain, nonatomic) MediaModel *mediaModel; // @synthesize mediaModel=_mediaModel;
@property(retain, nonatomic) Media *media; // @synthesize media=_media;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <VideoAssetLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (void)downloadCompletedWithURL:(id)arg1;
- (void)downloadProgressChanged:(double)arg1;
- (void)downloadVideo;
- (void)cancel;
- (void)loadVideoAssetForURLString:(id)arg1;
- (void)loadVideoAssetForPost:(id)arg1;
@property(readonly, nonatomic) _Bool isLoading;

@end

