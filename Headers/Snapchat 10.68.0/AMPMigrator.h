//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPDictionaryPersistor, AMPEventListRepository, AMPFilePaths, AMPFileSystem, AMPPropertyListPersistor, AMPSCAEventLogger, AMPSequenceIdRepository, AMPSessionInfoRepository;

@interface AMPMigrator : NSObject
{
    AMPEventListRepository *_eventListRepo;
    AMPSequenceIdRepository *_defaultQueueSeqIdRepo;
    AMPSessionInfoRepository *_sessionInfoRepo;
    AMPDictionaryPersistor *_dictionaryPersistor;
    AMPPropertyListPersistor *_plistPersistor;
    AMPSCAEventLogger *_eventLogger;
    AMPFilePaths *_v2FilePaths;
    AMPFilePaths *_v3GlobalFilePaths;
    AMPFileSystem *_fileSystem;
}

@property(readonly, nonatomic) AMPFileSystem *fileSystem; // @synthesize fileSystem=_fileSystem;
@property(readonly, nonatomic) AMPFilePaths *v3GlobalFilePaths; // @synthesize v3GlobalFilePaths=_v3GlobalFilePaths;
@property(readonly, nonatomic) AMPFilePaths *v2FilePaths; // @synthesize v2FilePaths=_v2FilePaths;
@property(readonly, nonatomic) AMPSCAEventLogger *eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) AMPPropertyListPersistor *plistPersistor; // @synthesize plistPersistor=_plistPersistor;
@property(readonly, nonatomic) AMPDictionaryPersistor *dictionaryPersistor; // @synthesize dictionaryPersistor=_dictionaryPersistor;
@property(readonly, nonatomic) AMPSessionInfoRepository *sessionInfoRepo; // @synthesize sessionInfoRepo=_sessionInfoRepo;
@property(readonly, nonatomic) AMPSequenceIdRepository *defaultQueueSeqIdRepo; // @synthesize defaultQueueSeqIdRepo=_defaultQueueSeqIdRepo;
@property(readonly, nonatomic) AMPEventListRepository *eventListRepo; // @synthesize eventListRepo=_eventListRepo;
- (void).cxx_destruct;
- (void)_migrateToV2SessionInfoWithV1EventsData:(id)arg1;
- (void)_logAppDataLossEventFromV1PropertyList:(id)arg1;
- (void)_migrateToV2SequenceIdProviderWithV1PropertyList:(id)arg1;
- (void)_migrateToV2EventListWithV1EventsData:(id)arg1;
- (id)_getCurrentVersion;
- (void)_setVersion:(id)arg1;
- (void)_migrateV2ToV3;
- (void)migrateV0AndV1ToV2;
- (void)migrateToV3;
- (_Bool)hasMigratedToVersion:(id)arg1;
- (id)initWithEventListRepository:(id)arg1 defaultQueueSequenceIdRepository:(id)arg2 sessionInfoRepository:(id)arg3 dictionaryPersistor:(id)arg4 plistPersistor:(id)arg5 SCAEventLogger:(id)arg6 fileSystem:(id)arg7 v2FilePaths:(id)arg8 v3GlobalFilePaths:(id)arg9;

@end

