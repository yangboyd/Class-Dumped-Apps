//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface SCOperaPlaybackIntentToNextLogParametersBuilder : NSObject
{
    long long _featureMajorName;
    long long _featureMinorName;
    long long _loadPhase;
    long long _itemLoadState;
    long long _itemType;
    NSString *_itemId;
    _Bool _streaming;
    _Bool _longForm;
    long long _itemLoadedCount;
    long long _entryEvent;
    unsigned long long _mediaSizeByte;
    NSString *_itemGroupId;
    long long _streamingFailureCode;
    long long _intentToPlaylistStartSetupViewModelsTimeMs;
    long long _playlistSetupViewModelsTimeMs;
    _Bool _itemLoaded;
    long long _playSource;
    NSDate *_mediaViewingStartDate;
    double _snapDuration;
    double _videoPreparationStartTimeMs;
    double _videoPrepareTimeMs;
    long long _playerSessionTimeStamp;
    long long _viewSource;
    long long _mediaType;
    long long _productMediaType;
    long long _connectionClass;
}

+ (id)operaPlaybackIntentToNextLogParametersFromExistingOperaPlaybackIntentToNextLogParameters:(id)arg1;
+ (id)operaPlaybackIntentToNextLogParameters;
- (void).cxx_destruct;
- (id)withConnectionClass:(long long)arg1;
- (id)withProductMediaType:(long long)arg1;
- (id)withMediaType:(long long)arg1;
- (id)withViewSource:(long long)arg1;
- (id)withPlayerSessionTimeStamp:(long long)arg1;
- (id)withVideoPrepareTimeMs:(double)arg1;
- (id)withVideoPreparationStartTimeMs:(double)arg1;
- (id)withSnapDuration:(double)arg1;
- (id)withMediaViewingStartDate:(id)arg1;
- (id)withPlaySource:(long long)arg1;
- (id)withItemLoaded:(_Bool)arg1;
- (id)withPlaylistSetupViewModelsTimeMs:(long long)arg1;
- (id)withIntentToPlaylistStartSetupViewModelsTimeMs:(long long)arg1;
- (id)withStreamingFailureCode:(long long)arg1;
- (id)withItemGroupId:(id)arg1;
- (id)withMediaSizeByte:(unsigned long long)arg1;
- (id)withEntryEvent:(long long)arg1;
- (id)withItemLoadedCount:(long long)arg1;
- (id)withLongForm:(_Bool)arg1;
- (id)withStreaming:(_Bool)arg1;
- (id)withItemId:(id)arg1;
- (id)withItemType:(long long)arg1;
- (id)withItemLoadState:(long long)arg1;
- (id)withLoadPhase:(long long)arg1;
- (id)withFeatureMinorName:(long long)arg1;
- (id)withFeatureMajorName:(long long)arg1;
- (id)build;

@end

