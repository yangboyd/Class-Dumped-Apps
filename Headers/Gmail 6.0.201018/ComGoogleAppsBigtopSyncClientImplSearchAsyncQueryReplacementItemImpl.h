//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplItemsCommonItemImpl.h"

#import "JBTQueryReplacementItem-Protocol.h"

@class ComGoogleAppsBigtopServicesSearchNaturalLanguageQueryTransform, NSString;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncQueryReplacementItemImpl : ComGoogleAppsBigtopSyncClientImplItemsCommonItemImpl <JBTQueryReplacementItem>
{
    id <JBTId> id__;
    ComGoogleAppsBigtopServicesSearchNaturalLanguageQueryTransform *naturalLanguageQueryTransform_;
    NSString *userTypedQueryString_;
}

- (void)dealloc;
- (id)getOriginalUserQueryToOverrideQueryReplacement;
- (id)getUserTypedQuery;
- (id)getReplacedQuery;
- (id)getItemType;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

