//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper, ComGoogleAppsBigtopSyncClientImplCommonParsedQuery, ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableList;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplProducersChangeListMetadata : NSObject
{
    ComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config *config_;
    ComGoogleAppsBigtopSyncClientImplCommonParsedQuery *parsedQuery_;
    id <JBTId> idOfCommandThatCausedUpdate_;
    ComGoogleCommonBaseOptional *serverTotalCount_;
    _Bool spanCloseOnly_;
    _Bool hasResultsInTrashOrSpam_;
    ComGoogleCommonBaseOptional *spellCheckQuery_;
    ComGoogleCommonCollectImmutableList *suggestedQueries_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper *visibilityHelper_;
    ComGoogleCommonCollectImmutableList *searchRefinementChips_;
    _Bool fromOnlineSearch_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isFromOnlineSearch;
- (id)getSearchRefinementChips;
- (id)getSuggestedQueries;
- (id)getSpellCheckQuery;
- (_Bool)getHasResultsInTrashOrSpam;
- (_Bool)isSpanCloseOnly;
- (id)getServerTotalCount;
- (id)getIdOfCommandThatCausedUpdate;
- (void)setVisibilityHelperWithComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelper:(id)arg1;
- (id)getVisibilityHelper;
- (id)getParsedQuery;
- (id)getConfig;

@end

