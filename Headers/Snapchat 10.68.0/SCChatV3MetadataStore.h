//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMetadataStore-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSString, SCChatMediaCache, SCChatMediaReferenceManager, SCChatMediaRequestManager, SCChatMetadataStoreListenerAnnouncer, SCDataCoordinatorListenerAnnouncer, SCPreferences, SCQueuePerformer;
@protocol SCChatLogger;

@interface SCChatV3MetadataStore : NSObject <SCUserSessionScoped, SCChatMetadataStore, SCTraceEnabled>
{
    NSMutableDictionary *_addressMediaCards;
    NSMutableDictionary *_urlMediaCards;
    NSMutableDictionary *_mediaMetadataDicts;
    NSMutableDictionary *_snapchatters;
    NSMutableDictionary *_contributionStoryPublishers;
    NSMutableDictionary *_storySnapMetadatas;
    NSMutableDictionary *_searchStoryMetadatas;
    NSMutableDictionary *_storySnapMediaContents;
    NSMutableDictionary *_mapSnapMetadatas;
    NSMutableDictionary *_mapPoiMetadatas;
    NSMutableDictionary *_chatDrafts;
    NSMutableSet *_tappedSnapchatterIds;
    NSMutableDictionary *_storySnapMetadataLoadStates;
    NSMutableDictionary *_searchStoryMetadataLoadStates;
    NSMutableDictionary *_mapSnapMetadataLoadStates;
    NSMutableDictionary *_mapPoiMetadataLoadStates;
    NSMutableDictionary *_conversationMetadata;
    NSMutableDictionary *_conversationMetadataReference;
    SCQueuePerformer *_performer;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    SCChatMediaCache *_mediaCache;
    id <SCChatLogger> _logger;
    SCChatMetadataStoreListenerAnnouncer *_announcer;
    NSString *_metadataStoreArchivePath;
    _Bool _invalidated;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCPreferences *_userPreferences;
}

+ (_Bool)useMetadataStoreForLoadState;
+ (id)dataCoordinatorIdentifier;
@property(readonly, nonatomic) NSDictionary *urlMediaCards; // @synthesize urlMediaCards=_urlMediaCards;
@property(readonly, nonatomic) NSDictionary *addressMediaCards; // @synthesize addressMediaCards=_addressMediaCards;
@property(readonly, nonatomic) NSDictionary *chatDrafts; // @synthesize chatDrafts=_chatDrafts;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (id)_removeStorySnapMediaContent:(id)arg1;
- (void)_removeViewedSnapMediaContent:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)markSnapAsViewedForConversationId:(id)arg1 messageId:(id)arg2 media:(id)arg3;
- (void)removeMetadataForMessages:(id)arg1 conversationId:(id)arg2;
- (void)__clear;
- (void)clear;
- (void)resetSessionBasedStates;
- (long long)_getSearchStoryMetadataLoadStateForSearchStoryId:(id)arg1;
- (void)_setSearchStoriesMetadataLoadState:(long long)arg1 forSearchStoryId:(id)arg2;
- (void)setSearchStoriesMetadataLoadState:(long long)arg1 forSearchStoryId:(id)arg2;
- (long long)_storySnapMetadataLoadStateForStorySnapId:(id)arg1;
- (void)_setStorySnapMetadataLoadState:(long long)arg1 forStorySnapId:(id)arg2;
- (void)setStorySnapMetadataLoadState:(long long)arg1 forStorySnapId:(id)arg2;
- (void)_updateMetadataWithConversationId:(id)arg1 messageIdentifier:(id)arg2 mediaId:(id)arg3 contentType:(long long)arg4 mutationBlock:(CDUnknownBlockType)arg5;
- (void)updateConversationMetadataByIds:(id)arg1 modifyAllMessageMetadatasWithMutationBlock:(CDUnknownBlockType)arg2;
- (void)_updateConversationMetadataById:(id)arg1 modifyAllMessageMetadatasWithMutationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateConversationMetadataById:(id)arg1 modifyAllMessageMetadatasWithMutationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateMessageMetadataForMessageId:(id)arg1 conversationId:(id)arg2 modifyMessageMetadataWithMutationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateMetadataWithConversationId:(id)arg1 messageIdentifiers:(id)arg2 mutationBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateMetadataWithConversationId:(id)arg1 mutationBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_getSearchStoryMetadataById:(id)arg1;
- (void)_putSearchStoryMetadata:(id)arg1;
- (void)updateConversationById:(id)arg1 putSearchStoryMetadataLoadState:(long long)arg2 putSearchStoryMetadata:(id)arg3;
- (id)_searchStorySnapMediaContentFromMetadata:(id)arg1;
- (long long)_mapPoiShareMetadataLoadStateRorMapPoiId:(id)arg1;
- (void)_setMapPoiShareMetadataLoadState:(long long)arg1 forMapPoiId:(id)arg2;
- (long long)_mapSnapMetadataLoadStateForMapSnapId:(id)arg1;
- (void)_setMapSnapMetadataLoadState:(long long)arg1 forMapSnapId:(id)arg2;
- (void)setMapSnapMetadataLoadState:(long long)arg1 forMapSnapId:(id)arg2;
- (void)_putMapPoiShareMetadata:(id)arg1;
- (void)updateConversationById:(id)arg1 poiID:(id)arg2 putPoiShareMetadataLoadState:(long long)arg3 putMapPoiShareMetadata:(id)arg4;
- (id)_mapSnapMetadataById:(id)arg1;
- (void)_putMapSnapMetadata:(id)arg1;
- (void)updateConversationById:(id)arg1 storySnapID:(id)arg2 putMapSnapMetadataLoadState:(long long)arg3 putMapSnapMetadata:(id)arg4;
- (id)_getStorySnapMediaContentById:(id)arg1;
- (void)_putStorySnapMediaContent:(id)arg1;
- (void)putStorySnapMediaContent:(id)arg1 conversationId:(id)arg2;
- (id)_getStorySnapMetadataById:(id)arg1;
- (void)_putStorySnapMetadata:(id)arg1;
- (void)_putContributionStoryPublisher:(id)arg1;
- (void)putContributionStoryPublisher:(id)arg1 conversationId:(id)arg2;
- (void)_loadStorySnapForSnapId:(id)arg1 message:(id)arg2 mediaType:(id)arg3 requestContext:(long long)arg4 storyLoadStateGetter:(CDUnknownBlockType)arg5 contentDownloadHandler:(CDUnknownBlockType)arg6;
- (void)_setLoadingStateForStorySnapById:(id)arg1 conversationId:(id)arg2;
- (void)loadSearchSnapForId:(id)arg1 dynamicStoryId:(id)arg2 message:(id)arg3 requestContext:(long long)arg4;
- (long long)_getSearchStoryLoadStateForStorySnapId:(id)arg1;
- (void)loadMapSnapForId:(id)arg1 poiId:(id)arg2 message:(id)arg3 requestContext:(long long)arg4;
- (long long)_getMapSnapLoadStateForStorySnapId:(id)arg1;
- (void)_loadStorySnapchatterForSnapId:(id)arg1 snapchatterId:(id)arg2 messageId:(id)arg3 conversationId:(id)arg4;
- (void)loadStorySnapchatterForSnapId:(id)arg1 snapchatterId:(id)arg2 messageId:(id)arg3 conversationId:(id)arg4;
- (void)loadStorySnapForId:(id)arg1 message:(id)arg2 requestContext:(long long)arg3;
- (long long)_getStorySnapLoadStateForStorySnapId:(id)arg1;
- (void)loadContributionStoryPublisherForId:(id)arg1 conversationId:(id)arg2;
- (void)updateConversationById:(id)arg1 putStorySnapMetadataLoadState:(long long)arg2 putStorySnapMetadata:(id)arg3 putSnapchatter:(id)arg4 putContributionStoryPublisher:(id)arg5;
- (void)markSnapchatterIdAsTapped:(id)arg1 conversationId:(id)arg2;
- (void)_putSnapchatter:(id)arg1;
- (void)putSnapchatter:(id)arg1 conversationId:(id)arg2;
- (void)_loadSnapchatterWithSnapchatterId:(id)arg1 conversationId:(id)arg2;
- (void)_addMetadataReference:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)loadSnapchatterWithSnapchatterId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3;
- (void)getMediaMetadataDictforMediaId:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)putMediaMetadataDict:(id)arg1 forMediaId:(id)arg2;
- (void)_putAddressMediaCardContents:(id)arg1;
- (void)putAddressMediaCardContents:(id)arg1 conversationId:(id)arg2;
- (id)_addressMediaCardContentsForAddresses:(id)arg1;
- (_Bool)_hasUnloadedThumbnailForAddress:(id)arg1;
- (void)_loadAddressMediaCards:(id)arg1 fromText:(id)arg2 conversationId:(id)arg3;
- (void)_correctLoadStateForAddressThumbnailsByAddresses:(id)arg1;
- (void)_loadAddress:(id)arg1 forMessage:(id)arg2 needSpamCheck:(_Bool)arg3;
- (void)_putURLMediaCardContents:(id)arg1;
- (void)putURLMediaCardContents:(id)arg1 conversationId:(id)arg2;
- (id)_urlMediaCardContentsForUrls:(id)arg1;
- (id)_urlMediaCardContentForUrl:(id)arg1;
- (_Bool)_hasUnloadedThumbnailForUrl:(id)arg1;
- (_Bool)_hasUnloadedMetadataForUrl:(id)arg1;
- (void)_downloadMetadataForUrls:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 needSpamCheck:(_Bool)arg4;
- (void)_downloadThumbnailForUrls:(id)arg1 conversationId:(id)arg2;
- (void)_correctLoadStateForUrlThumbnailsByUrls:(id)arg1;
- (void)_loadUrls:(id)arg1 forMessages:(id)arg2 needSpamCheck:(_Bool)arg3;
- (void)loadMediaCardsForMessage:(id)arg1 needSpamCheck:(_Bool)arg2;
- (void)putChatDraft:(id)arg1 forConversationId:(id)arg2;
- (id)chatDraftForConversationId:(id)arg1;
- (void)updateMediaLoadState:(long long)arg1 mediaUploadState:(long long)arg2 conversationId:(id)arg3 messageId:(id)arg4 mediaId:(id)arg5 contentType:(long long)arg6;
- (void)_updateMediaUploadState:(long long)arg1 conversationId:(id)arg2 messageId:(id)arg3 mediaId:(id)arg4 contentType:(long long)arg5;
- (void)updateMediaUploadState:(long long)arg1 conversationId:(id)arg2 messageId:(id)arg3 mediaId:(id)arg4 contentType:(long long)arg5;
- (void)_updateMediaLoadState:(long long)arg1 conversationId:(id)arg2 messageIdentifier:(id)arg3 mediaId:(id)arg4 contentType:(long long)arg5;
- (void)updateMediaLoadState:(long long)arg1 conversationId:(id)arg2 messageIdentifier:(id)arg3 mediaId:(id)arg4 contentType:(long long)arg5;
- (void)updateStickerLoadState:(long long)arg1 conversationId:(id)arg2 messageId:(id)arg3;
- (void)_checkAndCorrectMetadataForConversationId:(id)arg1;
- (void)correctLoadStateForChatEntryForConversationId:(id)arg1 messages:(id)arg2;
- (void)_loadStateFromDisk;
- (_Bool)_saveStateToDisk;
- (_Bool)saveStateToDisk;
- (void)_deleteStateFromDisk;
- (void)invalidate;
- (void)transferMessageMetadataFromResolutionId:(id)arg1 toMessageId:(id)arg2 conversationId:(id)arg3;
- (void)removeMessageMetadataForMessageId:(id)arg1 conversationId:(id)arg2;
- (void)mediaMetadataForMediaId:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)messageMetadataForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messageMetadataForMessageIds:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messageMetadataForMessageId:(id)arg1 conversationId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_metadataForConversationId:(id)arg1;
- (id)_combinedMessageMetadataMapForConversationId:(id)arg1;
- (void)fetchAllConversationMetadatas:(CDUnknownBlockType)arg1;
- (void)conversationMetadataForConversationIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)conversationMetadataForConversationId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_messageMetadataForReference:(id)arg1;
- (id)_messageMetadataForConversationId:(id)arg1 messageId:(id)arg2;
- (void)metadataForMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithMediaRequestManager:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithUserSession:(id)arg1 mediaCache:(id)arg2 mediaReferenceManager:(id)arg3 logger:(id)arg4 feedClearDataManager:(id)arg5 performer:(id)arg6 announcer:(id)arg7;
- (id)initWithUserSession:(id)arg1 mediaCache:(id)arg2 mediaReferenceManager:(id)arg3 logger:(id)arg4 feedClearDataManager:(id)arg5;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

