//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCCardCache-Protocol.h>

@class NSMutableDictionary, NSString, NSURL;

@interface DSCMemoryCardCache : NSObject <DSCCardCache>
{
    _Bool _open;
    NSURL *cacheDirectoryURL;
    NSMutableDictionary *_cardIndex;
    unsigned long long _nextIdentifier;
    double _createdTime;
    double _lastUpdateTime;
    NSString *_cacheLocale;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *cacheLocale; // @synthesize cacheLocale=_cacheLocale;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(nonatomic) double createdTime; // @synthesize createdTime=_createdTime;
@property(nonatomic) unsigned long long nextIdentifier; // @synthesize nextIdentifier=_nextIdentifier;
@property(retain, nonatomic) NSMutableDictionary *cardIndex; // @synthesize cardIndex=_cardIndex;
@property(readonly, nonatomic) NSURL *cacheDirectoryURL; // @synthesize cacheDirectoryURL;
- (id)cardMetadataPairForIdentifier:(unsigned long long)arg1;
- (id)cardForIdentifier:(unsigned long long)arg1;
- (void)clearCache;
- (void)updateEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeCards:(id)arg1 withKeys:(id)arg2 sharedCardData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)metadataCopyForCardWithIdentifier:(unsigned long long)arg1;
- (void)updateMetadataForIdentifiers:(id)arg1 withBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openWithMaxAge:(double)arg1 prefetchCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)deleteIfCorruptOrExpiredWithMaxAge:(double)arg1;
- (_Bool)isExpiredWithMaxAge:(double)arg1;
- (void)fetchCardsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeAndDelete:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

