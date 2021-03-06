//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GAMDJsvmLoad, GAMDNetworkDetails, GAMDOcmDetails, GAMSDocsAppLoadInvariants_ChunkingDetails, GPBInt32Array, NSString;

@interface GAMSDocsAppLoadInvariants : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool accountPickerShown; // @dynamic accountPickerShown;
@property(nonatomic) _Bool activityRecreateImage; // @dynamic activityRecreateImage;
@property(nonatomic) _Bool appStarted; // @dynamic appStarted;
@property(nonatomic) _Bool appStartupTimingFromPreviousOpen; // @dynamic appStartupTimingFromPreviousOpen;
@property(nonatomic) _Bool celloBackfillDuringOpen; // @dynamic celloBackfillDuringOpen;
@property(nonatomic) _Bool celloSyncDuringOpen; // @dynamic celloSyncDuringOpen;
@property(retain, nonatomic) GAMSDocsAppLoadInvariants_ChunkingDetails *chunkingDetails; // @dynamic chunkingDetails;
@property(nonatomic) _Bool concurrentIntents; // @dynamic concurrentIntents;
@property(nonatomic) _Bool convertedDocument; // @dynamic convertedDocument;
@property(nonatomic) int doclistDatabaseSize; // @dynamic doclistDatabaseSize;
@property(nonatomic) int documentAclCount; // @dynamic documentAclCount;
@property(nonatomic) int documentFeatureVersion; // @dynamic documentFeatureVersion;
@property(nonatomic) int documentModelVersion; // @dynamic documentModelVersion;
@property(nonatomic) _Bool domainFontUsedInDocument; // @dynamic domainFontUsedInDocument;
@property(nonatomic) int editorMode; // @dynamic editorMode;
@property(copy, nonatomic) NSString *editorSessionId; // @dynamic editorSessionId;
@property(nonatomic) _Bool firstSlideNotRequested; // @dynamic firstSlideNotRequested;
@property(nonatomic) _Bool fontMetadataRefreshEnabled; // @dynamic fontMetadataRefreshEnabled;
@property(retain, nonatomic) GPBInt32Array *gmailExperimentIdArray; // @dynamic gmailExperimentIdArray;
@property(readonly, nonatomic) unsigned long long gmailExperimentIdArray_Count; // @dynamic gmailExperimentIdArray_Count;
@property(nonatomic) _Bool hasAccountPickerShown; // @dynamic hasAccountPickerShown;
@property(nonatomic) _Bool hasActivityRecreateImage; // @dynamic hasActivityRecreateImage;
@property(nonatomic) _Bool hasAppStarted; // @dynamic hasAppStarted;
@property(nonatomic) _Bool hasAppStartupTimingFromPreviousOpen; // @dynamic hasAppStartupTimingFromPreviousOpen;
@property(nonatomic) _Bool hasCelloBackfillDuringOpen; // @dynamic hasCelloBackfillDuringOpen;
@property(nonatomic) _Bool hasCelloSyncDuringOpen; // @dynamic hasCelloSyncDuringOpen;
@property(nonatomic) _Bool hasChunkingDetails; // @dynamic hasChunkingDetails;
@property(nonatomic) _Bool hasConcurrentIntents; // @dynamic hasConcurrentIntents;
@property(nonatomic) _Bool hasConvertedDocument; // @dynamic hasConvertedDocument;
@property(nonatomic) _Bool hasDoclistDatabaseSize; // @dynamic hasDoclistDatabaseSize;
@property(nonatomic) _Bool hasDocumentAclCount; // @dynamic hasDocumentAclCount;
@property(nonatomic) _Bool hasDocumentFeatureVersion; // @dynamic hasDocumentFeatureVersion;
@property(nonatomic) _Bool hasDocumentModelVersion; // @dynamic hasDocumentModelVersion;
@property(nonatomic) _Bool hasDomainFontUsedInDocument; // @dynamic hasDomainFontUsedInDocument;
@property(nonatomic) _Bool hasEditorMode; // @dynamic hasEditorMode;
@property(nonatomic) _Bool hasEditorSessionId; // @dynamic hasEditorSessionId;
@property(nonatomic) _Bool hasFirstSlideNotRequested; // @dynamic hasFirstSlideNotRequested;
@property(nonatomic) _Bool hasFontMetadataRefreshEnabled; // @dynamic hasFontMetadataRefreshEnabled;
@property(nonatomic) _Bool hasHasIncrementalCommands; // @dynamic hasHasIncrementalCommands;
@property(nonatomic) _Bool hasHasLockAcquisitionTimedOut; // @dynamic hasHasLockAcquisitionTimedOut;
@property(nonatomic) _Bool hasHasOpendbTimedOut; // @dynamic hasHasOpendbTimedOut;
@property(nonatomic) _Bool hasHasOverflowedHeader; // @dynamic hasHasOverflowedHeader;
@property(nonatomic) _Bool hasHasPendingChanges; // @dynamic hasHasPendingChanges;
@property(nonatomic) _Bool hasHasServerOptinSecrets; // @dynamic hasHasServerOptinSecrets;
@property(nonatomic) _Bool hasHasStaleLocalContent; // @dynamic hasHasStaleLocalContent;
@property(nonatomic) _Bool hasHasSubstitutedFont; // @dynamic hasHasSubstitutedFont;
@property(nonatomic) _Bool hasHasUndeliverablePendingChanges; // @dynamic hasHasUndeliverablePendingChanges;
@property(nonatomic) _Bool hasIncrementalCommands; // @dynamic hasIncrementalCommands;
@property(nonatomic) _Bool hasInitialFontMetadataReadyForPrefetch; // @dynamic hasInitialFontMetadataReadyForPrefetch;
@property(nonatomic) _Bool hasInitialFontsHaveNonStandardWeight; // @dynamic hasInitialFontsHaveNonStandardWeight;
@property(nonatomic) _Bool hasInitialModelHasDotumFont; // @dynamic hasInitialModelHasDotumFont;
@property(nonatomic) _Bool hasInitialModelHasEquations; // @dynamic hasInitialModelHasEquations;
@property(nonatomic) _Bool hasInitialModelHasGulimFont; // @dynamic hasInitialModelHasGulimFont;
@property(nonatomic) _Bool hasInitialModelHasMsPgothicFont; // @dynamic hasInitialModelHasMsPgothicFont;
@property(nonatomic) _Bool hasInitialModelHasMsPminchoFont; // @dynamic hasInitialModelHasMsPminchoFont;
@property(nonatomic) _Bool hasInitialModelHasNonStandardWeight; // @dynamic hasInitialModelHasNonStandardWeight;
@property(nonatomic) _Bool hasInitialModelHasWebfonts; // @dynamic hasInitialModelHasWebfonts;
@property(nonatomic) _Bool hasInitialRevision; // @dynamic hasInitialRevision;
@property(nonatomic) _Bool hasIsAnachronistic; // @dynamic hasIsAnachronistic;
@property(nonatomic) _Bool hasIsConsistentLineHeightEnabled; // @dynamic hasIsConsistentLineHeightEnabled;
@property(nonatomic) _Bool hasIsDocumentShared; // @dynamic hasIsDocumentShared;
@property(nonatomic) _Bool hasIsGmailAttachment; // @dynamic hasIsGmailAttachment;
@property(nonatomic) _Bool hasIsLoadedByRequestingCreator; // @dynamic hasIsLoadedByRequestingCreator;
@property(nonatomic) _Bool hasIsNewDocument; // @dynamic hasIsNewDocument;
@property(nonatomic) _Bool hasIsRenderDelayedByWebfonts; // @dynamic hasIsRenderDelayedByWebfonts;
@property(nonatomic) _Bool hasIsServerCreated; // @dynamic hasIsServerCreated;
@property(nonatomic) _Bool hasIsSplitScreen; // @dynamic hasIsSplitScreen;
@property(nonatomic) _Bool hasIsViewerLoadChunked; // @dynamic hasIsViewerLoadChunked;
@property(nonatomic) _Bool hasJapaneseSystemFontsAsWebfonts; // @dynamic hasJapaneseSystemFontsAsWebfonts;
@property(nonatomic) _Bool hasJsvmLoad; // @dynamic hasJsvmLoad;
@property(nonatomic) _Bool hasKoreanSystemFontsAsWebfonts; // @dynamic hasKoreanSystemFontsAsWebfonts;
@property(nonatomic) _Bool hasLocalModelReason; // @dynamic hasLocalModelReason;
@property(nonatomic) _Bool hasLockAcquisitionTimedOut; // @dynamic hasLockAcquisitionTimedOut;
@property(nonatomic) _Bool hasLowestFontMetadataSchemaVersion; // @dynamic hasLowestFontMetadataSchemaVersion;
@property(nonatomic) _Bool hasMemoryOptimizationsEnabled; // @dynamic hasMemoryOptimizationsEnabled;
@property(nonatomic) _Bool hasMetadataFetch; // @dynamic hasMetadataFetch;
@property(nonatomic) _Bool hasModelSource; // @dynamic hasModelSource;
@property(nonatomic) _Bool hasModelSourceForced; // @dynamic hasModelSourceForced;
@property(nonatomic) _Bool hasNetworkChanged; // @dynamic hasNetworkChanged;
@property(nonatomic) _Bool hasNetworkDetails; // @dynamic hasNetworkDetails;
@property(nonatomic) _Bool hasNormalizedIsNewDocument; // @dynamic hasNormalizedIsNewDocument;
@property(nonatomic) _Bool hasOcmDetails; // @dynamic hasOcmDetails;
@property(nonatomic) _Bool hasOfficeCompatabilityMode; // @dynamic hasOfficeCompatabilityMode;
@property(nonatomic) _Bool hasOfflineEnabled; // @dynamic hasOfflineEnabled;
@property(nonatomic) _Bool hasOfflineOptedIn; // @dynamic hasOfflineOptedIn;
@property(nonatomic) _Bool hasOpendbTimedOut; // @dynamic hasOpendbTimedOut;
@property(nonatomic) _Bool hasOriginalImportFileSizeBytes; // @dynamic hasOriginalImportFileSizeBytes;
@property(nonatomic) _Bool hasOverflowedHeader; // @dynamic hasOverflowedHeader;
@property(nonatomic) _Bool hasPendingChanges; // @dynamic hasPendingChanges;
@property(nonatomic) _Bool hasPreferedModelSource; // @dynamic hasPreferedModelSource;
@property(nonatomic) _Bool hasPreloadOptimizationsEnabled; // @dynamic hasPreloadOptimizationsEnabled;
@property(nonatomic) _Bool hasPunchEditorImpressionSessionId; // @dynamic hasPunchEditorImpressionSessionId;
@property(nonatomic) _Bool hasQueueChunksUntilIncrementals; // @dynamic hasQueueChunksUntilIncrementals;
@property(nonatomic) _Bool hasRelevancyRank; // @dynamic hasRelevancyRank;
@property(nonatomic) _Bool hasRitzBootstrapFirstChunkJsonLength; // @dynamic hasRitzBootstrapFirstChunkJsonLength;
@property(nonatomic) _Bool hasRitzBootstrapTopSnapshotJsonLength; // @dynamic hasRitzBootstrapTopSnapshotJsonLength;
@property(nonatomic) _Bool hasRitzOfflineDeserialization; // @dynamic hasRitzOfflineDeserialization;
@property(nonatomic) _Bool hasRitzServerCalculatedRevision; // @dynamic hasRitzServerCalculatedRevision;
@property(nonatomic) _Bool hasServerOptinSecrets; // @dynamic hasServerOptinSecrets;
@property(nonatomic) _Bool hasServiceWorkerFeatureEnabled; // @dynamic hasServiceWorkerFeatureEnabled;
@property(nonatomic) _Bool hasServiceWorkerNavigationPreloadEnabled; // @dynamic hasServiceWorkerNavigationPreloadEnabled;
@property(nonatomic) _Bool hasSketchyPrerenderEnabled; // @dynamic hasSketchyPrerenderEnabled;
@property(nonatomic) _Bool hasStaleLocalContent; // @dynamic hasStaleLocalContent;
@property(nonatomic) _Bool hasStartLoadTimeUsec; // @dynamic hasStartLoadTimeUsec;
@property(nonatomic) _Bool hasStartReason; // @dynamic hasStartReason;
@property(nonatomic) _Bool hasSubstitutedFont; // @dynamic hasSubstitutedFont;
@property(nonatomic) _Bool hasSyncDuringOpen; // @dynamic hasSyncDuringOpen;
@property(nonatomic) _Bool hasUndeliverablePendingChanges; // @dynamic hasUndeliverablePendingChanges;
@property(nonatomic) _Bool hasUnmodifiedUntilInitialLayoutCompleted; // @dynamic hasUnmodifiedUntilInitialLayoutCompleted;
@property(nonatomic) _Bool initialFontMetadataReadyForPrefetch; // @dynamic initialFontMetadataReadyForPrefetch;
@property(nonatomic) _Bool initialFontsHaveNonStandardWeight; // @dynamic initialFontsHaveNonStandardWeight;
@property(nonatomic) _Bool initialModelHasDotumFont; // @dynamic initialModelHasDotumFont;
@property(nonatomic) _Bool initialModelHasEquations; // @dynamic initialModelHasEquations;
@property(nonatomic) _Bool initialModelHasGulimFont; // @dynamic initialModelHasGulimFont;
@property(nonatomic) _Bool initialModelHasMsPgothicFont; // @dynamic initialModelHasMsPgothicFont;
@property(nonatomic) _Bool initialModelHasMsPminchoFont; // @dynamic initialModelHasMsPminchoFont;
@property(nonatomic) _Bool initialModelHasNonStandardWeight; // @dynamic initialModelHasNonStandardWeight;
@property(nonatomic) _Bool initialModelHasWebfonts; // @dynamic initialModelHasWebfonts;
@property(nonatomic) int initialRevision; // @dynamic initialRevision;
@property(nonatomic) _Bool isAnachronistic; // @dynamic isAnachronistic;
@property(nonatomic) _Bool isConsistentLineHeightEnabled; // @dynamic isConsistentLineHeightEnabled;
@property(nonatomic) _Bool isDocumentShared; // @dynamic isDocumentShared;
@property(nonatomic) _Bool isGmailAttachment; // @dynamic isGmailAttachment;
@property(nonatomic) _Bool isLoadedByRequestingCreator; // @dynamic isLoadedByRequestingCreator;
@property(nonatomic) _Bool isNewDocument; // @dynamic isNewDocument;
@property(nonatomic) _Bool isRenderDelayedByWebfonts; // @dynamic isRenderDelayedByWebfonts;
@property(nonatomic) _Bool isServerCreated; // @dynamic isServerCreated;
@property(nonatomic) _Bool isSplitScreen; // @dynamic isSplitScreen;
@property(nonatomic) _Bool isViewerLoadChunked; // @dynamic isViewerLoadChunked;
@property(nonatomic) _Bool japaneseSystemFontsAsWebfonts; // @dynamic japaneseSystemFontsAsWebfonts;
@property(retain, nonatomic) GAMDJsvmLoad *jsvmLoad; // @dynamic jsvmLoad;
@property(nonatomic) _Bool koreanSystemFontsAsWebfonts; // @dynamic koreanSystemFontsAsWebfonts;
@property(nonatomic) int localModelReason; // @dynamic localModelReason;
@property(nonatomic) int lowestFontMetadataSchemaVersion; // @dynamic lowestFontMetadataSchemaVersion;
@property(nonatomic) _Bool memoryOptimizationsEnabled; // @dynamic memoryOptimizationsEnabled;
@property(nonatomic) _Bool metadataFetch; // @dynamic metadataFetch;
@property(nonatomic) int modelSource; // @dynamic modelSource;
@property(nonatomic) _Bool modelSourceForced; // @dynamic modelSourceForced;
@property(nonatomic) _Bool networkChanged; // @dynamic networkChanged;
@property(retain, nonatomic) GAMDNetworkDetails *networkDetails; // @dynamic networkDetails;
@property(nonatomic) _Bool normalizedIsNewDocument; // @dynamic normalizedIsNewDocument;
@property(retain, nonatomic) GAMDOcmDetails *ocmDetails; // @dynamic ocmDetails;
@property(nonatomic) _Bool officeCompatabilityMode; // @dynamic officeCompatabilityMode;
@property(nonatomic) _Bool offlineEnabled; // @dynamic offlineEnabled;
@property(nonatomic) _Bool offlineOptedIn; // @dynamic offlineOptedIn;
@property(nonatomic) int originalImportFileSizeBytes; // @dynamic originalImportFileSizeBytes;
@property(nonatomic) int preferedModelSource; // @dynamic preferedModelSource;
@property(nonatomic) _Bool preloadOptimizationsEnabled; // @dynamic preloadOptimizationsEnabled;
@property(copy, nonatomic) NSString *punchEditorImpressionSessionId; // @dynamic punchEditorImpressionSessionId;
@property(nonatomic) _Bool queueChunksUntilIncrementals; // @dynamic queueChunksUntilIncrementals;
@property(nonatomic) int relevancyRank; // @dynamic relevancyRank;
@property(nonatomic) int ritzBootstrapFirstChunkJsonLength; // @dynamic ritzBootstrapFirstChunkJsonLength;
@property(nonatomic) int ritzBootstrapTopSnapshotJsonLength; // @dynamic ritzBootstrapTopSnapshotJsonLength;
@property(nonatomic) _Bool ritzOfflineDeserialization; // @dynamic ritzOfflineDeserialization;
@property(nonatomic) int ritzServerCalculatedRevision; // @dynamic ritzServerCalculatedRevision;
@property(nonatomic) _Bool serviceWorkerFeatureEnabled; // @dynamic serviceWorkerFeatureEnabled;
@property(nonatomic) _Bool serviceWorkerNavigationPreloadEnabled; // @dynamic serviceWorkerNavigationPreloadEnabled;
@property(nonatomic) _Bool sketchyPrerenderEnabled; // @dynamic sketchyPrerenderEnabled;
@property(nonatomic) long long startLoadTimeUsec; // @dynamic startLoadTimeUsec;
@property(nonatomic) int startReason; // @dynamic startReason;
@property(nonatomic) _Bool syncDuringOpen; // @dynamic syncDuringOpen;
@property(nonatomic) _Bool unmodifiedUntilInitialLayoutCompleted; // @dynamic unmodifiedUntilInitialLayoutCompleted;

@end

