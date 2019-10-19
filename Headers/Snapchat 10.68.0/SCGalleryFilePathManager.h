//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSyncFileResolver-Protocol.h"

@class NSString, SCUserSession;

@interface SCGalleryFilePathManager : NSObject <SCSyncFileResolver>
{
    NSString *_rootStoragePathComponent;
    SCUserSession *_userSession;
}

+ (void)clearGalleryMediaExceptUserId:(id)arg1;
+ (void)clearGalleryCacheData;
+ (id)galleryUniqueMP4FileURLInCacheDirectoryWithPrefix:(id)arg1;
+ (id)galleryUniqueJPGFileURLInCacheDirectoryWithPrefix:(id)arg1;
- (void).cxx_destruct;
- (void)_claimDocumentDirectoryWithUserId:(id)arg1;
- (id)generateMiniThumbnailFromLowresData:(id)arg1 lowResMedia:(id)arg2;
- (id)renderedLowresMediaForSnap:(id)arg1 detail:(id)arg2;
- (_Bool)resolveMediaOverlayLocallyForSnap:(id)arg1;
- (id)mediaCachedOverlayEntityURLForSnap:(id)arg1;
- (id)renderedLowresMediaCachedURLForSnap:(id)arg1;
- (id)mediaCachedOverlayURLForSnap:(id)arg1;
- (id)mediaCachedURLForSnap:(id)arg1;
- (void)removeAllData;
- (id)rootCacheURL;
- (id)rootDocumentURL;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

