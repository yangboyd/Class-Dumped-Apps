//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBScanImageProvider-Protocol.h"

@class DBPixelBuffer, NSString;
@protocol DBScanImageProvider;

@interface DBScanResizedImageProvider : NSObject <DBScanImageProvider>
{
    double _preferredThumbnailWidth;
    id <DBScanImageProvider> _provider;
    DBPixelBuffer *_thumbnail;
}

- (void).cxx_destruct;
- (id)fileRevInfoForLogging;
- (void)loadFullRes:(CDUnknownBlockType)arg1;
- (void)db_didLoadThumbnail:(id)arg1 thumbnailBlock:(CDUnknownBlockType)arg2;
- (void)loadThumbnail:(CDUnknownBlockType)arg1;
- (id)initWithImageProvider:(id)arg1 preferredThumbnailWidth:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

