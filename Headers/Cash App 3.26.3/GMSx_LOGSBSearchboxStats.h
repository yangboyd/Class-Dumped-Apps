//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_LOGSBSearchboxStats : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int abandonedRequestCount; // @dynamic abandonedRequestCount;
@property(nonatomic) unsigned int browsableCategorySelected; // @dynamic browsableCategorySelected;
@property(nonatomic) unsigned int cachedImagesCount; // @dynamic cachedImagesCount;
@property(nonatomic) unsigned int cancelledFetchFinalTimeoutCount; // @dynamic cancelledFetchFinalTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchLongTimeoutCount; // @dynamic cancelledFetchLongTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchMediumTimeoutCount; // @dynamic cancelledFetchMediumTimeoutCount;
@property(nonatomic) unsigned int cancelledFetchShortTimeoutCount; // @dynamic cancelledFetchShortTimeoutCount;
@property(nonatomic) unsigned long long clientExperimentTriggeredFlags; // @dynamic clientExperimentTriggeredFlags;
@property(copy, nonatomic) NSString *clientName; // @dynamic clientName;
@property(copy, nonatomic) NSString *compressedRoundTripHistogram; // @dynamic compressedRoundTripHistogram;
@property(nonatomic) unsigned int connectionRejectedRequestCount; // @dynamic connectionRejectedRequestCount;
@property(nonatomic) unsigned int connectionRequestCount; // @dynamic connectionRequestCount;
@property(nonatomic) unsigned int connectionResponseCount; // @dynamic connectionResponseCount;
@property(nonatomic) unsigned int currentBrowsableCategory; // @dynamic currentBrowsableCategory;
@property(copy, nonatomic) NSString *experimentStats; // @dynamic experimentStats;
@property(nonatomic) unsigned int externalCacheHitCount; // @dynamic externalCacheHitCount;
@property(nonatomic) unsigned int fetcherRequestCount; // @dynamic fetcherRequestCount;
@property(nonatomic) unsigned int firstEditTimeMsec; // @dynamic firstEditTimeMsec;
@property(nonatomic) _Bool fp204ForActionClickFailed; // @dynamic fp204ForActionClickFailed;
@property(nonatomic) unsigned int generatedResponseCount; // @dynamic generatedResponseCount;
@property(nonatomic) unsigned int generatedResponseImpressionCount; // @dynamic generatedResponseImpressionCount;
@property(nonatomic) _Bool hasAbandonedRequestCount; // @dynamic hasAbandonedRequestCount;
@property(nonatomic) _Bool hasBrowsableCategorySelected; // @dynamic hasBrowsableCategorySelected;
@property(nonatomic) _Bool hasCachedImagesCount; // @dynamic hasCachedImagesCount;
@property(nonatomic) _Bool hasCancelledFetchFinalTimeoutCount; // @dynamic hasCancelledFetchFinalTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchLongTimeoutCount; // @dynamic hasCancelledFetchLongTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchMediumTimeoutCount; // @dynamic hasCancelledFetchMediumTimeoutCount;
@property(nonatomic) _Bool hasCancelledFetchShortTimeoutCount; // @dynamic hasCancelledFetchShortTimeoutCount;
@property(nonatomic) _Bool hasClientExperimentTriggeredFlags; // @dynamic hasClientExperimentTriggeredFlags;
@property(nonatomic) _Bool hasClientName; // @dynamic hasClientName;
@property(nonatomic) _Bool hasCompressedRoundTripHistogram; // @dynamic hasCompressedRoundTripHistogram;
@property(nonatomic) _Bool hasConnectionRejectedRequestCount; // @dynamic hasConnectionRejectedRequestCount;
@property(nonatomic) _Bool hasConnectionRequestCount; // @dynamic hasConnectionRequestCount;
@property(nonatomic) _Bool hasConnectionResponseCount; // @dynamic hasConnectionResponseCount;
@property(nonatomic) _Bool hasCurrentBrowsableCategory; // @dynamic hasCurrentBrowsableCategory;
@property(nonatomic) _Bool hasExperimentStats; // @dynamic hasExperimentStats;
@property(nonatomic) _Bool hasExternalCacheHitCount; // @dynamic hasExternalCacheHitCount;
@property(nonatomic) _Bool hasFetcherRequestCount; // @dynamic hasFetcherRequestCount;
@property(nonatomic) _Bool hasFirstEditTimeMsec; // @dynamic hasFirstEditTimeMsec;
@property(nonatomic) _Bool hasFp204ForActionClickFailed; // @dynamic hasFp204ForActionClickFailed;
@property(nonatomic) _Bool hasGeneratedResponseCount; // @dynamic hasGeneratedResponseCount;
@property(nonatomic) _Bool hasGeneratedResponseImpressionCount; // @dynamic hasGeneratedResponseImpressionCount;
@property(nonatomic) _Bool hasHighConfidenceIcingResultCount; // @dynamic hasHighConfidenceIcingResultCount;
@property(nonatomic) _Bool hasIcingConnectionInitializationTimeMsec; // @dynamic hasIcingConnectionInitializationTimeMsec;
@property(nonatomic) _Bool hasIcingGlobalQueryCompressedRoundTripHistogram; // @dynamic hasIcingGlobalQueryCompressedRoundTripHistogram;
@property(nonatomic) _Bool hasIcingGlobalQueryMaxRoundTripTimeMsec; // @dynamic hasIcingGlobalQueryMaxRoundTripTimeMsec;
@property(nonatomic) _Bool hasIcingGlobalQueryTotalRoundTripTimeMsec; // @dynamic hasIcingGlobalQueryTotalRoundTripTimeMsec;
@property(nonatomic) _Bool hasInternalCacheHitCount; // @dynamic hasInternalCacheHitCount;
@property(nonatomic) _Bool hasLastEditTimeMsec; // @dynamic hasLastEditTimeMsec;
@property(nonatomic) _Bool hasLastQueryBuildTimeMsec; // @dynamic hasLastQueryBuildTimeMsec;
@property(nonatomic) _Bool hasMaxRoundTripTimeMsec; // @dynamic hasMaxRoundTripTimeMsec;
@property(nonatomic) _Bool hasNetworkImagesCount; // @dynamic hasNetworkImagesCount;
@property(nonatomic) _Bool hasNetworkImagesTotalLoadingTimeMsec; // @dynamic hasNetworkImagesTotalLoadingTimeMsec;
@property(nonatomic) _Bool hasNumZeroPrefixSuggestionsShown; // @dynamic hasNumZeroPrefixSuggestionsShown;
@property(nonatomic) _Bool hasOfflineTriggered; // @dynamic hasOfflineTriggered;
@property(nonatomic) _Bool hasOriginalQuery; // @dynamic hasOriginalQuery;
@property(nonatomic) _Bool hasOriginalQueryLength; // @dynamic hasOriginalQueryLength;
@property(nonatomic) _Bool hasOutOfSyncResponseCount; // @dynamic hasOutOfSyncResponseCount;
@property(nonatomic) _Bool hasPipsRequestId; // @dynamic hasPipsRequestId;
@property(nonatomic) _Bool hasQueryLengthAtSessionStart; // @dynamic hasQueryLengthAtSessionStart;
@property(nonatomic) _Bool hasQueryPrefixForDisplayedSuggestions; // @dynamic hasQueryPrefixForDisplayedSuggestions;
@property(nonatomic) _Bool hasReleaseNumber; // @dynamic hasReleaseNumber;
@property(nonatomic) _Bool hasRenderedResponseCount; // @dynamic hasRenderedResponseCount;
@property(nonatomic) _Bool hasRequestIdentifier; // @dynamic hasRequestIdentifier;
@property(nonatomic) _Bool hasServerResponseTimestamp; // @dynamic hasServerResponseTimestamp;
@property(nonatomic) _Bool hasSessionDurationMsec; // @dynamic hasSessionDurationMsec;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) _Bool hasSessionNumber; // @dynamic hasSessionNumber;
@property(nonatomic) _Bool hasStartupInitTimeMsec; // @dynamic hasStartupInitTimeMsec;
@property(nonatomic) _Bool hasStartupRenderedResponseTimeMsec; // @dynamic hasStartupRenderedResponseTimeMsec;
@property(nonatomic) _Bool hasSwipeUpHomeEnabled; // @dynamic hasSwipeUpHomeEnabled;
@property(nonatomic) _Bool hasTotalIcingGlobalQueryRequests; // @dynamic hasTotalIcingGlobalQueryRequests;
@property(nonatomic) _Bool hasTotalIcingGlobalQueryResults; // @dynamic hasTotalIcingGlobalQueryResults;
@property(nonatomic) _Bool hasTotalRenderedResponseTimeMsec; // @dynamic hasTotalRenderedResponseTimeMsec;
@property(nonatomic) _Bool hasTotalRoundTripTimeMsec; // @dynamic hasTotalRoundTripTimeMsec;
@property(nonatomic) _Bool hasTotalWaitForHighConfidenceIcingResultMsec; // @dynamic hasTotalWaitForHighConfidenceIcingResultMsec;
@property(nonatomic) _Bool hasUnstableConnection; // @dynamic hasUnstableConnection;
@property(nonatomic) _Bool hasZeroPrefixEnabled; // @dynamic hasZeroPrefixEnabled;
@property(nonatomic) _Bool hasZeroPrefixRequestLocationDataAgeSec; // @dynamic hasZeroPrefixRequestLocationDataAgeSec;
@property(nonatomic) _Bool hasZeroPrefixResponseAgeSec; // @dynamic hasZeroPrefixResponseAgeSec;
@property(nonatomic) _Bool hasZeroPrefixRoundTripTimeMsec; // @dynamic hasZeroPrefixRoundTripTimeMsec;
@property(nonatomic) unsigned int highConfidenceIcingResultCount; // @dynamic highConfidenceIcingResultCount;
@property(nonatomic) unsigned int icingConnectionInitializationTimeMsec; // @dynamic icingConnectionInitializationTimeMsec;
@property(copy, nonatomic) NSString *icingGlobalQueryCompressedRoundTripHistogram; // @dynamic icingGlobalQueryCompressedRoundTripHistogram;
@property(nonatomic) unsigned int icingGlobalQueryMaxRoundTripTimeMsec; // @dynamic icingGlobalQueryMaxRoundTripTimeMsec;
@property(nonatomic) unsigned int icingGlobalQueryTotalRoundTripTimeMsec; // @dynamic icingGlobalQueryTotalRoundTripTimeMsec;
@property(nonatomic) unsigned int internalCacheHitCount; // @dynamic internalCacheHitCount;
@property(nonatomic) unsigned int lastEditTimeMsec; // @dynamic lastEditTimeMsec;
@property(nonatomic) unsigned int lastQueryBuildTimeMsec; // @dynamic lastQueryBuildTimeMsec;
@property(nonatomic) unsigned int maxRoundTripTimeMsec; // @dynamic maxRoundTripTimeMsec;
@property(nonatomic) unsigned int networkImagesCount; // @dynamic networkImagesCount;
@property(nonatomic) unsigned int networkImagesTotalLoadingTimeMsec; // @dynamic networkImagesTotalLoadingTimeMsec;
@property(nonatomic) unsigned int numZeroPrefixSuggestionsShown; // @dynamic numZeroPrefixSuggestionsShown;
@property(nonatomic) _Bool offlineTriggered; // @dynamic offlineTriggered;
@property(copy, nonatomic) NSString *originalQuery; // @dynamic originalQuery;
@property(nonatomic) unsigned int originalQueryLength; // @dynamic originalQueryLength;
@property(nonatomic) unsigned int outOfSyncResponseCount; // @dynamic outOfSyncResponseCount;
@property(nonatomic) unsigned long long pipsRequestId; // @dynamic pipsRequestId;
@property(nonatomic) unsigned int queryLengthAtSessionStart; // @dynamic queryLengthAtSessionStart;
@property(copy, nonatomic) NSString *queryPrefixForDisplayedSuggestions; // @dynamic queryPrefixForDisplayedSuggestions;
@property(nonatomic) unsigned int releaseNumber; // @dynamic releaseNumber;
@property(nonatomic) unsigned int renderedResponseCount; // @dynamic renderedResponseCount;
@property(copy, nonatomic) NSString *requestIdentifier; // @dynamic requestIdentifier;
@property(nonatomic) long long serverResponseTimestamp; // @dynamic serverResponseTimestamp;
@property(nonatomic) unsigned int sessionDurationMsec; // @dynamic sessionDurationMsec;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(nonatomic) unsigned int sessionNumber; // @dynamic sessionNumber;
@property(nonatomic) unsigned int startupInitTimeMsec; // @dynamic startupInitTimeMsec;
@property(nonatomic) unsigned int startupRenderedResponseTimeMsec; // @dynamic startupRenderedResponseTimeMsec;
@property(nonatomic) _Bool swipeUpHomeEnabled; // @dynamic swipeUpHomeEnabled;
@property(nonatomic) unsigned int totalIcingGlobalQueryRequests; // @dynamic totalIcingGlobalQueryRequests;
@property(nonatomic) unsigned int totalIcingGlobalQueryResults; // @dynamic totalIcingGlobalQueryResults;
@property(nonatomic) unsigned int totalRenderedResponseTimeMsec; // @dynamic totalRenderedResponseTimeMsec;
@property(nonatomic) unsigned int totalRoundTripTimeMsec; // @dynamic totalRoundTripTimeMsec;
@property(nonatomic) unsigned int totalWaitForHighConfidenceIcingResultMsec; // @dynamic totalWaitForHighConfidenceIcingResultMsec;
@property(nonatomic) _Bool unstableConnection; // @dynamic unstableConnection;
@property(nonatomic) _Bool zeroPrefixEnabled; // @dynamic zeroPrefixEnabled;
@property(nonatomic) unsigned int zeroPrefixRequestLocationDataAgeSec; // @dynamic zeroPrefixRequestLocationDataAgeSec;
@property(nonatomic) unsigned int zeroPrefixResponseAgeSec; // @dynamic zeroPrefixResponseAgeSec;
@property(nonatomic) unsigned int zeroPrefixRoundTripTimeMsec; // @dynamic zeroPrefixRoundTripTimeMsec;

@end

