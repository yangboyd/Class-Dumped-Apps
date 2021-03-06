//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLogger-Protocol.h"
#import "JBTLiveList-Protocol.h"

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleAppsBigtopSyncClientImplCommonEventListenersList, ComGoogleAppsBigtopSyncClientImplCommonRankedElementList, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplLivelistLiveListElementMerger, ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_PauseState, ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager, ComGoogleAppsBigtopSyncClientImplProducersRankLockingElementProducer, JBTCBigTopCommonEnums_Metric, JBTPriority, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager, JavaUtilList, JavaUtilMap;

@interface ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl : NSObject <JBTLiveList, ComGoogleAppsBigtopSyncClientImplCommonFeedbackloggingApiFeedbackLogger>
{
    ComGoogleAppsBigtopSyncClientImplCommonEventListenersList *eventListeners_;
    ComGoogleAppsBigtopSyncClientImplProducersRankLockingElementProducer *producer_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopSyncClientImplCommonRankedElementList *currentElements_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager *manager_;
    id <ComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager> sectionManager_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListImpl_PauseState *pauseState_;
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListElementMerger *elementMerger_;
    id <JavaUtilList> currentSapiSpans_;
    JBTCBigTopCommonEnums_Metric *liveListType_;
    JBTPriority *priority_;
    _Bool rankLockedItemUpdateEnabled_;
    id <JavaUtilMap> rankLockedItems_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getPauseState;
@property(readonly, copy) NSString *description;
- (id)elementFeedbackStringWithId:(id)arg1;
- (void)logFeedbackWithXPTLoggingApi:(id)arg1;
- (void)java_finalize;
- (void)completeAutoSpansDueToError;
- (void)completeAutoSpans;
- (id)startSapiSpanWithJBTCBigTopCommonEnums_Metric:(id)arg1 withJBTSpan:(id)arg2;
- (id)getSectionManager;
- (void)setSectionManagerWithComGoogleAppsBigtopSyncClientImplSectionsApiInternalSectionManager:(id)arg1;
- (_Bool)doesElementHaveDeferredRankChangeWithJBTId:(id)arg1;
- (void)unlockElementWithJBTId:(id)arg1 withJBTSpan:(id)arg2;
- (void)lockElementToRankWithJBTId:(id)arg1;
- (_Bool)isElementLockedWithJBTId:(id)arg1;
- (void)forceUpdateQuerySpecWithJBTSpan:(id)arg1;
- (void)checkServerNowWithBackfillRequestPriorityWithJBTRequestPriority:(id)arg1;
- (void)checkServerNowWithJBTSpan:(id)arg1;
- (void)updateProducerConfigWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_Config:(id)arg1 withJBTSpan:(id)arg2;
- (id)getQueryExtension;
- (id)getConfig;
- (int)getVersion;
- (_Bool)isOfflineOnly;
- (void)setOfflineOnly;
- (id)getPriority;
- (void)setPriorityWithJBTPriority:(id)arg1 withJBTSpan:(id)arg2;
- (void)updateQueryStringWithNSString:(id)arg1 withJBTSpan:(id)arg2;
- (_Bool)hasListenerWithJBTEventListener:(id)arg1;
- (void)removeListenerWithJBTEventListener:(id)arg1;
- (void)addListenerWithJBTEventListener:(id)arg1;
- (id)getElementByIndexWithInt:(int)arg1;
- (int)getSize;
- (id)getAllElementsAndMetadata;
- (id)getAllElements;
- (id)getElementByIdWithJBTId:(id)arg1;
- (_Bool)hasMoreElements;
- (void)setMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (void)increaseMaxElementsWithInt:(int)arg1 withJBTSpan:(id)arg2;
- (int)getMaxElements;
- (_Bool)isExpectingRemoteResults;
- (_Bool)isExpectingMoreChanges;
- (_Bool)isRunning;
- (_Bool)isStarted;
- (_Bool)isPaused;
- (void)resume;
- (void)pause;
- (void)stopWithJBTSpan:(id)arg1;
- (void)startWithJBTSpan:(id)arg1;
- (void)afterElementsChangedEventWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg1;
- (void)beforeElementsChangedEventWithComGoogleAppsBigtopSyncClientImplProducersElementProducer_ChangeList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

