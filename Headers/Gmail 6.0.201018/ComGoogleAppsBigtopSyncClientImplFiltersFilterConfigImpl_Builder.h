//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTFilterConfig_Builder-Protocol.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplFiltersFilterConfigImpl_Builder : NSObject <JBTFilterConfig_Builder>
{
}

- (id)build;
- (id)setApplySmartLabelsWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setMarkAsImportantWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setMarkAsSpamWithJBTFilterConfig_MarkAs:(id)arg1;
- (id)setMoveToTrashWithBoolean:(_Bool)arg1;
- (id)setArchiveWithBoolean:(_Bool)arg1;
- (id)setStarWithBoolean:(_Bool)arg1;
- (id)setMarkAsReadWithBoolean:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

