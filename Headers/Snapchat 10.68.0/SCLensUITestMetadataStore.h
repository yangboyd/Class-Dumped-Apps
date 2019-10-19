//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensMetadataStoreProtocol-Protocol.h"
#import "SCLensUITestMetadataStoreProtocol-Protocol.h"

@class NSArray, NSString, SCLensMetadataStoreListenerAnnouncer;

@interface SCLensUITestMetadataStore : NSObject <SCLensMetadataStoreProtocol, SCLensUITestMetadataStoreProtocol>
{
    SCLensMetadataStoreListenerAnnouncer *_announcer;
    NSArray *_lenses;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)applyMetadataProviderSettings:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)synchronize;
- (void)stopUpdating;
- (void)startUpdating;
@property(readonly, nonatomic) NSArray *lensesToPrefetch;
@property(readonly, nonatomic) NSArray *lenses;
- (void)addLensData:(id)arg1;
- (void)warmUp;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

