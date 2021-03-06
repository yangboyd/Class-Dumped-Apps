//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKPickerRoot-Protocol.h"

@class GDKEmptyViewRecord, NSString;

@interface GDKFilesVCPickerRoot : NSObject <GDKPickerRoot>
{
    CDUnknownBlockType _config;
    GDKEmptyViewRecord *_emptyViewRecord;
    CDUnknownBlockType _additionalConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType additionalConfig; // @synthesize additionalConfig=_additionalConfig;
@property(readonly, nonatomic) GDKEmptyViewRecord *emptyViewRecord; // @synthesize emptyViewRecord=_emptyViewRecord;
@property(readonly, nonatomic) CDUnknownBlockType config; // @synthesize config=_config;
- (id)rootViewControllerWithProducer:(id)arg1 title:(id)arg2;
- (id)initWithConfig:(CDUnknownBlockType)arg1 emptyViewRecord:(id)arg2 additionalConfig:(CDUnknownBlockType)arg3;
- (id)initWithConfig:(CDUnknownBlockType)arg1 emptyViewRecord:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

