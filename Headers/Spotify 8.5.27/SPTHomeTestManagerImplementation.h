//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTHomeTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState;

@interface SPTHomeTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTHomeTestManager>
{
    _Bool _quickPlayEnabled;
    _Bool _consolidatedRecentlyPlayedEnabled;
    _Bool _downloadSectionsEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _quickPlayEnabledSignal;
    id <SPTFeatureFlagSignal> _consolidatedRecentlyPlayedEnabledSignal;
    id <SPTFeatureFlagSignal> _downloadSectionsEnabledSignal;
}

@property(nonatomic, getter=isDownloadSectionsEnabled) _Bool downloadSectionsEnabled; // @synthesize downloadSectionsEnabled=_downloadSectionsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> downloadSectionsEnabledSignal; // @synthesize downloadSectionsEnabledSignal=_downloadSectionsEnabledSignal;
@property(nonatomic, getter=isConsolidatedRecentlyPlayedEnabled) _Bool consolidatedRecentlyPlayedEnabled; // @synthesize consolidatedRecentlyPlayedEnabled=_consolidatedRecentlyPlayedEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> consolidatedRecentlyPlayedEnabledSignal; // @synthesize consolidatedRecentlyPlayedEnabledSignal=_consolidatedRecentlyPlayedEnabledSignal;
@property(nonatomic, getter=isQuickPlayEnabled) _Bool quickPlayEnabled; // @synthesize quickPlayEnabled=_quickPlayEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> quickPlayEnabledSignal; // @synthesize quickPlayEnabledSignal=_quickPlayEnabledSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupDownloadSectionsSignal;
- (void)setupQuickPlaySignal;
- (void)setupConsolidatedRecentlyPlayedSignal;
@property(readonly, nonatomic, getter=isProductStateNPT) _Bool productStateNPT;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

