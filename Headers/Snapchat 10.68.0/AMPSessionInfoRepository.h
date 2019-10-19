//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPEventSerializer, AMPFilePaths, AMPPropertyListPersistor;

@interface AMPSessionInfoRepository : NSObject
{
    AMPPropertyListPersistor *_plistPersistor;
    AMPEventSerializer *_eventSerializer;
    AMPFilePaths *_filePaths;
}

@property(retain, nonatomic) AMPFilePaths *filePaths; // @synthesize filePaths=_filePaths;
@property(retain, nonatomic) AMPEventSerializer *eventSerializer; // @synthesize eventSerializer=_eventSerializer;
@property(retain, nonatomic) AMPPropertyListPersistor *plistPersistor; // @synthesize plistPersistor=_plistPersistor;
- (void).cxx_destruct;
- (void)saveSessionInfo:(id)arg1;
- (id)getSessionInfo;
- (id)initWithPropertyListPersistor:(id)arg1 eventSerializer:(id)arg2 filePaths:(id)arg3;

@end

