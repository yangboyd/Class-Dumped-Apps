//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTFilterConfig_MarkAs;
@protocol JBTFilterConfig, JBTFilterConfig_Builder, JBTFilterConfig_CannedResponseLookupResult, JBTId, JBTStructuredQuery;

@protocol JBTFilterConfig_Builder <JavaObject>
- (id <JBTFilterConfig>)build;
- (id <JBTFilterConfig_Builder>)setSmartLabelClusterConfigToApplyWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1;
- (id <JBTFilterConfig_Builder>)setShouldCategorizeAsPersonalWithBoolean:(_Bool)arg1;
- (id <JBTFilterConfig_Builder>)setShouldApplySmartLabelsWithJBTFilterConfig_MarkAs:(JBTFilterConfig_MarkAs *)arg1;
- (id <JBTFilterConfig_Builder>)setShouldMarkAsImportantWithJBTFilterConfig_MarkAs:(JBTFilterConfig_MarkAs *)arg1;
- (id <JBTFilterConfig_Builder>)setCannedResponseLookupResultWithJBTFilterConfig_CannedResponseLookupResult:(id <JBTFilterConfig_CannedResponseLookupResult>)arg1;
- (id <JBTFilterConfig_Builder>)setShouldMarkAsSpamWithJBTFilterConfig_MarkAs:(JBTFilterConfig_MarkAs *)arg1;
- (id <JBTFilterConfig_Builder>)setForwardingAddressWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1;
- (id <JBTFilterConfig_Builder>)setShouldMoveToTrashWithBoolean:(_Bool)arg1;
- (id <JBTFilterConfig_Builder>)setShouldArchiveWithBoolean:(_Bool)arg1;
- (id <JBTFilterConfig_Builder>)setUserLabelClusterConfigWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1;
- (id <JBTFilterConfig_Builder>)setShouldStarWithBoolean:(_Bool)arg1;
- (id <JBTFilterConfig_Builder>)setShouldMarkAsReadWithBoolean:(_Bool)arg1;
- (id <JBTFilterConfig_Builder>)setStructuredQueryWithJBTStructuredQuery:(id <JBTStructuredQuery>)arg1;
- (id <JBTFilterConfig_Builder>)setQueryStringWithComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg1;
- (id <JBTFilterConfig_Builder>)setIdWithJBTId:(id <JBTId>)arg1;
@end

